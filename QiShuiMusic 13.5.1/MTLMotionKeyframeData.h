@interface MTLMotionKeyframeData : NSObject
@property (nonatomic) <MTLBuffer> buffer;
@property (nonatomic) Q offset;
- (void)setBuffer:;
- (void)setOffset:;
- (id)init;
- (void)dealloc;
- (id)buffer;
- (unsigned long long)hash;
- (unsigned long long)offset;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)data;
@end
