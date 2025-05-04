@interface AWEFormatAISearchCardModel : AWESearchBasicCardModel
@property (nonatomic) NSString copedContent;
@property (nonatomic) AWEFormatAISearchCardRawDataModel rawData;
- (id)copedContent;
- (void)setCopedContent:;
- (void)setRawData:;
- (void).cxx_destruct;
- (id)rawData;
+ (BOOL)supportsSecureCoding;
+ (id)JSONTransformerForKey:;
+ (id)JSONKeyPathsByPropertyKey;
@end
