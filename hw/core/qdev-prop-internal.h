/*
 * qdev property parsing
 *
 * This work is licensed under the terms of the GNU GPL, version 2 or later.
 * See the COPYING file in the top-level directory.
 */

#ifndef HW_CORE_QDEV_PROP_INTERNAL_H
#define HW_CORE_QDEV_PROP_INTERNAL_H

void get_enum(Object *obj, Visitor *v, const char *name, void *opaque,
              Error **errp);
void set_enum(Object *obj, Visitor *v, const char *name, void *opaque,
              Error **errp);

void set_default_value_enum(Object *obj, const Property *prop);

#endif
