@interface AWEPlayInteractionPOIGuideFavoriteConfig : NSObject
@property (nonatomic) BOOL isCollected;
@property (nonatomic) BOOL shouldAnimationForFavorite;
- (BOOL)isCollected;
- (void)setIsCollected:;
- (id)initWithShouldAnimationIsCollected:shouldAnimationForFavorite:;
- (void)setShouldAnimationForFavorite:;
- (BOOL)shouldAnimationForFavorite;
@end
