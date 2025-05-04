@interface AWECodeGenAnchorListTipModel : AWEBaseDataModel
@property (nonatomic) BOOL isDisplayTip;
@property (nonatomic) NSString tipContent;
@property (nonatomic) NSString schema;
- (BOOL)isDisplayTip;
- (void)setIsDisplayTip:;
- (id)schema;
- (void)setSchema:;
- (void).cxx_destruct;
- (void)setTipContent:;
- (id)tipContent;
+ (id)JSONKeyPathsByPropertyKey;
@end
