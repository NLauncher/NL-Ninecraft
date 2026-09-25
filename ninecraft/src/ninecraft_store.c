#include <stdio.h>
#include <ninecraft/ninecraft_store.h>

void *ninecraft_store_vtable[] = {
    (void *)ninecraft_store_destory,
    (void *)ninecraft_store_destory,
    (void *)ninecraft_store_allows_query_purchases_on_startup,
    (void *)GET_SYSV_WRAPPER(ninecraft_store_get_store_id),
    (void *)ninecraft_store_query_products,
    (void *)ninecraft_store_purchase,
    (void *)ninecraft_store_query_purchases,
    (void *)ninecraft_store_is_trial,
    (void *)ninecraft_store_purchase_game,
    (void *)ninecraft_store_is_game_purchased,
    (void *)ninecraft_store_register_license_callback,
    (void *)ninecraft_store_handle_license_change
};

void *ninecraft_store_vtable_0_15_0[] = {
    (void *)ninecraft_store_destory,
    (void *)ninecraft_store_destory,
    (void *)ninecraft_store_allows_query_purchases_on_startup,
    (void *)ninecraft_store_requires_restore_purchases_button,
    (void *)ninecraft_store_allows_subscriptions,
    (void *)GET_SYSV_WRAPPER(ninecraft_store_get_store_id),
    (void *)ninecraft_store_query_products,
    (void *)ninecraft_store_purchase,
    (void *)ninecraft_store_acknowledge_purchase,
    (void *)ninecraft_store_query_purchases,
    (void *)ninecraft_store_restore_purchases,
    (void *)ninecraft_store_is_trial,
    (void *)ninecraft_store_purchase_game,
    (void *)ninecraft_store_is_game_purchased,
    (void *)GET_SYSV_WRAPPER(ninecraft_store_get_app_receipt),
    (void *)ninecraft_store_register_license_callback,
    (void *)ninecraft_store_handle_license_change
};

void *ninecraft_store_vtable_0_15_1[] = {
    (void *)ninecraft_store_destory,
    (void *)ninecraft_store_destory,
    (void *)ninecraft_store_requires_restore_purchases_button,
    (void *)ninecraft_store_allows_subscriptions,
    (void *)GET_SYSV_WRAPPER(ninecraft_store_get_store_id),
    (void *)ninecraft_store_query_products,
    (void *)ninecraft_store_purchase,
    (void *)ninecraft_store_acknowledge_purchase,
    (void *)ninecraft_store_query_purchases,
    (void *)ninecraft_store_restore_purchases,
    (void *)ninecraft_store_is_trial,
    (void *)ninecraft_store_purchase_game,
    (void *)ninecraft_store_is_game_purchased,
    (void *)GET_SYSV_WRAPPER(ninecraft_store_get_app_receipt),
    (void *)ninecraft_store_register_license_callback,
    (void *)ninecraft_store_handle_license_change
};

SYSV_WRAPPER(ninecraft_store_create, 3);
void ninecraft_store_create(ninecraft_store_context_t *ret, android_string_t *data, void *listener) {
    ret->store = (ninecraft_store_t *)malloc(sizeof(ninecraft_store_t));
    ret->store->vtable = ninecraft_store_vtable;
}

SYSV_WRAPPER(ninecraft_store_create_0_15_0, 3);
void ninecraft_store_create_0_15_0(ninecraft_store_context_t *ret, android_string_t *data, void *listener) {
    ret->store = (ninecraft_store_t *)malloc(sizeof(ninecraft_store_t));
    ret->store->vtable = ninecraft_store_vtable_0_15_0;
}

SYSV_WRAPPER(ninecraft_store_create_0_15_1, 3);
void ninecraft_store_create_0_15_1(ninecraft_store_context_t *ret, android_string_t *data, void *listener) {
    ret->store = (ninecraft_store_t *)malloc(sizeof(ninecraft_store_t));
    ret->store->vtable = ninecraft_store_vtable_0_15_1;
}

void ninecraft_store_destory(void *ninecraft_store) {
}

bool ninecraft_store_allows_query_purchases_on_startup(void *ninecraft_store) {
    return false;
}

bool ninecraft_store_requires_restore_purchases_button(void *ninecraft_store) {
    return false;
}

bool ninecraft_store_allows_subscriptions(void *ninecraft_store) {
    return false;
}

SYSV_WRAPPER(ninecraft_store_get_store_id, 2);
void ninecraft_store_get_store_id(android_string_t *ret, void *ninecraft_store) {
    android_string_cstr(ret, "NinecraftStore");
}

void ninecraft_store_query_products(void *ninecraft_store, android_vector_t *products) {
}

void ninecraft_store_purchase(void *ninecraft_store, android_string_gnu_t *name) {
}

void ninecraft_store_acknowledge_purchase(void *ninecraft_store, void *purchase_info, int product_type) {
}

void ninecraft_store_query_purchases(void *ninecraft_store) {
}

void ninecraft_store_restore_purchases(void *ninecraft_store) {
}

bool ninecraft_store_is_trial(void *ninecraft_store) {
    return false;
}

void ninecraft_store_purchase_game(void *ninecraft_store) {
}

bool ninecraft_store_is_game_purchased(void *ninecraft_store) {
    return true;
}

SYSV_WRAPPER(ninecraft_store_get_app_receipt, 2);
void ninecraft_store_get_app_receipt(android_string_t *ret, void *ninecraft_store) {
    android_string_cstr(ret, "");
}

void ninecraft_store_register_license_callback(void *ninecraft_store, void (*callback)(void)) {
}

void ninecraft_store_handle_license_change(void *ninecraft_store, void (*callback)(void)) {
}
