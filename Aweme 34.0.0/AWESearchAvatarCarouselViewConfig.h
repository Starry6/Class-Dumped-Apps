@interface AWESearchAvatarCarouselViewConfig : NSObject
@property (nonatomic) q count;
@property (nonatomic) double avatarSize;
@property (nonatomic) double intersectionWidth;
- (double)intersectionWidth;
- (void)setIntersectionWidth:;
- (void)setCount:;
- (long long)count;
- (double)avatarSize;
- (void)setAvatarSize:;
@end
