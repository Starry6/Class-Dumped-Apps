@interface AWESearchMerchandiseElement : AWEBaseApiModel
@property (nonatomic) NSString elementName;
@property (nonatomic) AWESearchMerchandisePicConfig picConfig;
@property (nonatomic) AWESearchMerchandiseTextConfig textConfig;
- (id)textConfig;
- (void)setTextConfig:;
- (id)picConfig;
- (void)setPicConfig:;
- (id)elementName;
- (void).cxx_destruct;
- (void)setElementName:;
+ (id)JSONKeyPathsByPropertyKey;
@end
