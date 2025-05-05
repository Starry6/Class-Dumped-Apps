@interface MDLBufferViewAllocator : NSObject
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithSharedRegionsNoCopy:;
- (id)newBufferViewAtRegionIndex:length:offset:;
- (id)newBufferViewAtRegionIndex:;
- (void)encodeBuffer:withCoder:forKey:;
- (void)encodeBuffers:withCoder:forKey:;
- (id)decodeBuffersWithCoder:forKey:;
- (id)decodeBufferWithCoder:forKey:;
+ (BOOL)supportsSecureCoding;
@end
