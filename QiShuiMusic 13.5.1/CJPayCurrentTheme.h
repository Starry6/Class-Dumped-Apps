@interface CJPayCurrentTheme : NSObject
@property (nonatomic) CJPayDeskTheme currentTheme;
@property (nonatomic) CJPayDeskTheme withDrawTheme;
@property (nonatomic) q showStyle;
- (void)setCurrentTheme:;
- (void)setShowStyle:;
- (void)setWithDrawTheme:;
- (long long)showStyle;
- (id)withDrawTheme;
- (void).cxx_destruct;
- (id)currentTheme;
- (id)bgColor;
- (id)fontColor;
+ (id)shared;
@end
