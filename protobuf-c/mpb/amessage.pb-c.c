/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: amessage.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "amessage.pb-c.h"
void mpb__amessage__init(Mpb__AMessage *message) {
  static Mpb__AMessage init_value = MPB__AMESSAGE__INIT;
  *message = init_value;
}
size_t mpb__amessage__get_packed_size(const Mpb__AMessage *message) {
  assert(message->base.descriptor == &mpb__amessage__descriptor);
  return protobuf_c_message_get_packed_size(
      (const ProtobufCMessage *)(message));
}
size_t mpb__amessage__pack(const Mpb__AMessage *message, uint8_t *out) {
  assert(message->base.descriptor == &mpb__amessage__descriptor);
  return protobuf_c_message_pack((const ProtobufCMessage *)message, out);
}
size_t mpb__amessage__pack_to_buffer(const Mpb__AMessage *message,
                                     ProtobufCBuffer *buffer) {
  assert(message->base.descriptor == &mpb__amessage__descriptor);
  return protobuf_c_message_pack_to_buffer((const ProtobufCMessage *)message,
                                           buffer);
}
Mpb__AMessage *mpb__amessage__unpack(ProtobufCAllocator *allocator, size_t len,
                                     const uint8_t *data) {
  return (Mpb__AMessage *)protobuf_c_message_unpack(&mpb__amessage__descriptor,
                                                    allocator, len, data);
}
void mpb__amessage__free_unpacked(Mpb__AMessage *message,
                                  ProtobufCAllocator *allocator) {
  assert(message->base.descriptor == &mpb__amessage__descriptor);
  protobuf_c_message_free_unpacked((ProtobufCMessage *)message, allocator);
}
static const ProtobufCFieldDescriptor mpb__amessage__field_descriptors[2] = {
    {
        "a", 1, PROTOBUF_C_LABEL_OPTIONAL, PROTOBUF_C_TYPE_INT32,
        offsetof(Mpb__AMessage, has_a), offsetof(Mpb__AMessage, a), NULL, NULL,
        0,            /* flags */
        0, NULL, NULL /* reserved1,reserved2, etc */
    },
    {
        "b", 2, PROTOBUF_C_LABEL_OPTIONAL, PROTOBUF_C_TYPE_INT32,
        offsetof(Mpb__AMessage, has_b), offsetof(Mpb__AMessage, b), NULL, NULL,
        0,            /* flags */
        0, NULL, NULL /* reserved1,reserved2, etc */
    },
};
static const unsigned mpb__amessage__field_indices_by_name[] = {
    0, /* field[0] = a */
    1, /* field[1] = b */
};
static const ProtobufCIntRange mpb__amessage__number_ranges[1 + 1] = {{1, 0},
                                                                      {0, 2}};
const ProtobufCMessageDescriptor mpb__amessage__descriptor = {
    PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
    "mpb.AMessage",
    "AMessage",
    "Mpb__AMessage",
    "mpb",
    sizeof(Mpb__AMessage),
    2,
    mpb__amessage__field_descriptors,
    mpb__amessage__field_indices_by_name,
    1,
    mpb__amessage__number_ranges,
    (ProtobufCMessageInit)mpb__amessage__init,
    NULL,
    NULL,
    NULL /* reserved[123] */
};