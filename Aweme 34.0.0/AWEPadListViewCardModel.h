@interface AWEPadListViewCardModel : MTLModel
@property (nonatomic) NSNumber cardStyle;
@property (nonatomic) NSNumber dataType;
@property (nonatomic) NSDictionary cardData;
@property (nonatomic) BOOL cardCover;
@property (nonatomic) NSDictionary coverLabelInfo;
@property (nonatomic) AWEPLVCardGridConfigModel cardGridConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)cardCover;
- (void)setCardCover:;
- (id)coverLabelInfo;
- (void)setCoverLabelInfo:;
- (id)cardGridConfig;
- (void)setCardGridConfig:;
- (void)setDataType:;
- (void).cxx_destruct;
- (id)dataType;
- (id)cardData;
- (void)setCardData:;
- (id)cardStyle;
- (void)setCardStyle:;
+ (id)cardGridConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
