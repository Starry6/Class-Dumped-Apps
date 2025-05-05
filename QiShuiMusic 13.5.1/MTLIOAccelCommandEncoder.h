@interface MTLIOAccelCommandEncoder : _MTLCommandEncoder
- (void)pushDebugGroup:;
- (unsigned long long)globalTraceObjectID;
- (void)setLabel:;
- (id)initWithCommandBuffer:;
- (void)popDebugGroup;
- (void)endEncoding;
@end
