@interface AWECodeGenAwemeGuideDanmakuContentModel : AWEBaseDataModel
@property (nonatomic) q scene;
@property (nonatomic) NSString text;
@property (nonatomic) NSString suffixText;
@property (nonatomic) NSString logo;
@property (nonatomic) BOOL useDyLogo;
@property (nonatomic) NSString linkAction;
- (BOOL)useDyLogo;
- (void)setUseDyLogo:;
- (void)setScene:;
- (long long)scene;
- (void)setText:;
- (id)suffixText;
- (void)setLogo:;
- (id)text;
- (id)logo;
- (void).cxx_destruct;
- (void)setSuffixText:;
- (id)linkAction;
- (void)setLinkAction:;
+ (id)JSONKeyPathsByPropertyKey;
@end
