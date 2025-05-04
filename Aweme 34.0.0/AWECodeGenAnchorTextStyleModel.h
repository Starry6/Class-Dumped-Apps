@interface AWECodeGenAnchorTextStyleModel : AWEBaseDataModel
@property (nonatomic) NSInteger maxLen;
@property (nonatomic) NSInteger fontSize;
@property (nonatomic) NSString fontColor;
@property (nonatomic) q bold;
@property (nonatomic) q ellipsis;
- (long long)ellipsis;
- (void)setMaxLen:;
- (void)setEllipsis:;
- (int)fontSize;
- (void)setFontSize:;
- (void).cxx_destruct;
- (id)fontColor;
- (int)maxLen;
- (long long)bold;
- (void)setBold:;
- (void)setFontColor:;
+ (id)JSONKeyPathsByPropertyKey;
@end
