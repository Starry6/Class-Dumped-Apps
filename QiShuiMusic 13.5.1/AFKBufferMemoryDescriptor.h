@interface AFKBufferMemoryDescriptor : AFKMemoryDescriptor
- (id)initWithManager:capacity:buffer:;
- (id)initWithManager:capacity:token:;
- (int)assumeControlWithOffset:andSize:;
- (int)releaseControl:withOffset:andSize:;
- (id)getBytesNoCopy:withSize:;
- (int)appendBytes:withSize:;
+ (id)withManager:capacity:;
+ (id)withManager:capacity:token:;
@end
