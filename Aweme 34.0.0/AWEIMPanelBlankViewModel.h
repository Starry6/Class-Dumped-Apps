@interface AWEIMPanelBlankViewModel : AWEIMPanelViewModel
@property (nonatomic) double cornerRadius;
@property (nonatomic) Q maskedCorners;
- (id)init;
- (unsigned long long)maskedCorners;
- (void)setMaskedCorners:;
- (void)setCornerRadius:;
- (double)cornerRadius;
+ (id)defaultTopViewModel;
+ (id)bottomInsetViewModel;
@end
