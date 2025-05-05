@interface IESECLiveTextElementModel : MTLModel
@property (nonatomic) NSString text;
@property (nonatomic) NSString textColor;
@property (nonatomic) double textFontSize;
@property (nonatomic) BOOL needBoldText;
@property (nonatomic) IESECLiveImageURLModel textBgImage;
@property (nonatomic) NSNumber maxWidth;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTextBgImage:;
- (BOOL)needBoldText;
- (void)setNeedBoldText:;
- (id)textBgImage;
- (double)textFontSize;
- (id)maxWidth;
- (void)setText:;
- (void)setMaxWidth:;
- (void)setTextColor:;
- (void).cxx_destruct;
- (id)textColor;
- (id)text;
- (void)setTextFontSize:;
+ (id)JSONKeyPathsByPropertyKey;
@end
