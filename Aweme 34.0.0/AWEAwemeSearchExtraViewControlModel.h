@interface AWEAwemeSearchExtraViewControlModel : AWEBaseApiModel
@property (nonatomic) BOOL hideAllAnchor;
@property (nonatomic) BOOL hideMixBar;
- (BOOL)hideMixBar;
- (void)setHideMixBar:;
- (BOOL)hideAllAnchor;
- (void)setHideAllAnchor:;
+ (id)JSONKeyPathsByPropertyKey;
@end
