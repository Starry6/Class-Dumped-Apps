@interface TTVideoEngineCacheRange : NSObject
@property (nonatomic) q offset;
@property (nonatomic) q size;
- (void)setOffset:;
- (long long)offset;
- (void)setSize:;
- (id)copyWithZone:;
- (long long)size;
@end
