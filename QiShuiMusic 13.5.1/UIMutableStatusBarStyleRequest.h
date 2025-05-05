@interface UIMutableStatusBarStyleRequest : UIStatusBarStyleRequest
@property (nonatomic) q style;
@property (nonatomic) q legibilityStyle;
@property (nonatomic) UIColor foregroundColor;
@property (nonatomic) double foregroundAlpha;
@property (nonatomic) NSNumber overrideHeight;
- (void)setForegroundColor:;
- (void)setLegibilityStyle:;
- (void)setOverrideHeight:;
- (void)setStyle:;
- (void)setForegroundAlpha:;
- (id)copyWithZone:;
@end
