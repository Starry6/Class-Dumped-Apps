@interface AWEIMEmoticonCommentTrackComponent : AWEIMEmoticonTrackComponent
@property (nonatomic) BOOL trackParamsOpt;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)trackThemeInfoSelectionChanged:enterMethod:;
- (void)trackDidSelectEmoticonModel:themeModel:indexPath:;
- (void)trackFavoriteRecommendEmojiAction:;
- (void)trackFavoriteRecommendEmojiShow;
- (id)enterFromTrackValue;
+ (BOOL)canCreateComponentWithContext:;
@end
