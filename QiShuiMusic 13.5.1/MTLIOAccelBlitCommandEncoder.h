@interface MTLIOAccelBlitCommandEncoder : MTLIOAccelCommandEncoder
- (unsigned long long)getType;
- (void)resetCommandsInBuffer:withRange:;
- (void)optimizeContentsForCPUAccess:slice:level:;
- (void)copyFromTexture:toTexture:;
- (void)fillTexture:level:slice:region:color:pixelFormat:;
- (void)copyFromTexture:sourceSlice:sourceLevel:toTexture:destinationSlice:destinationLevel:sliceCount:levelCount:;
- (void)synchronizeResource:;
- (void)sampleCountersInBuffer:atSampleIndex:withBarrier:;
- (void)copyIndirectCommandBuffer:sourceRange:destination:destinationIndex:;
- (void)optimizeIndirectCommandBuffer:withRange:;
- (void)fillTexture:level:slice:region:bytes:length:;
- (void)fillBuffer:range:pattern4:;
- (void)optimizeContentsForGPUAccess:;
- (void)synchronizeTexture:slice:level:;
- (void)fillTexture:level:slice:region:color:;
- (void)optimizeContentsForGPUAccess:slice:level:;
- (void)resolveCounters:inRange:destinationBuffer:destinationOffset:;
- (void)waitForFence:;
- (void)updateFence:;
- (void)optimizeContentsForCPUAccess:;
@end
