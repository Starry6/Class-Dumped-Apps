@interface AWESearchMerchandiseTextConfig : AWEBaseApiModel
@property (nonatomic) NSString textContent;
@property (nonatomic) NSNumber textSize;
@property (nonatomic) AWESearchMerchandiseBackgroundColor textColor;
@property (nonatomic) BOOL isBold;
- (BOOL)isBold;
- (void)setTextColor:;
- (void).cxx_destruct;
- (id)textColor;
- (void)setIsBold:;
- (void)setTextContent:;
- (id)textContent;
- (id)textSize;
- (void)setTextSize:;
+ (id)JSONKeyPathsByPropertyKey;
@end
