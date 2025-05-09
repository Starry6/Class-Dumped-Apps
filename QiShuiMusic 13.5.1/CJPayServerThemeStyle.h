@interface CJPayServerThemeStyle : JSONModel
@property (nonatomic) NSString themeString;
@property (nonatomic) CJPayButtonStyle buttonStyle;
@property (nonatomic) CJPayCheckBoxStyle checkBoxStyle;
@property (nonatomic) UIColor linkTextColor;
@property (nonatomic) UIColor agreementTextColor;
@property (nonatomic) Q theme;
@property (nonatomic) UIColor cursorColor;
@property (nonatomic) UIColor withdrawTipsColor;
@property (nonatomic) UIColor warningTextColor;
@property (nonatomic) NSArray themedH5PathList;
- (void)setCursorColor:;
- (void)setThemeString:;
- (id)agreementTextColor;
- (id)checkBoxStyle;
- (id)cursorColor;
- (void)setAgreementTextColor:;
- (void)setCheckBoxStyle:;
- (void)setThemedH5PathList:;
- (void)setWithdrawTipsColor:;
- (id)themeString;
- (id)themedH5PathList;
- (id)withdrawTipsColor;
- (void)setTheme:;
- (unsigned long long)theme;
- (id)init;
- (void)setButtonStyle:;
- (id)buttonStyle;
- (void).cxx_destruct;
- (id)warningTextColor;
- (id)linkTextColor;
- (void)setLinkTextColor:;
- (void)setWarningTextColor:;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
+ (unsigned long long)themeFromString:;
@end
