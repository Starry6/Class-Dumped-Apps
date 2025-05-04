@interface AWEDCFeedDislikePanelCell : AWEDoubleColumnDislikeCell
@property (nonatomic) Q themeStyle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setThemeStyle:;
- (void)configWithTitle:;
- (void)configWithTitle:withImage:;
- (void)updateBackgroundColor;
- (unsigned long long)themeStyle;
+ (id)reuseIdentifier;
@end
