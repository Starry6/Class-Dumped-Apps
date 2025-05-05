@interface VMUSimpleSerializer : VMUAbstractSerializer
- (id)init;
- (void)dealloc;
- (unsigned int)serializeString:;
- (void)serialize32:;
- (id)copyContiguousData;
- (void)_serializeValues:count:;
- (void)serialize64:;
- (unsigned int)serializeNullTerminatedBytes:;
@end
