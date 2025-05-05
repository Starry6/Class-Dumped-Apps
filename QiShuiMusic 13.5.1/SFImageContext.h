@interface SFImageContext : NSObject
@property (nonatomic) double uiScale;
@property (nonatomic) BOOL hasDarkAppearance;
- (void)setUiScale:;
- (double)uiScale;
- (BOOL)hasDarkAppearance;
- (void)setHasDarkAppearance:;
@end
