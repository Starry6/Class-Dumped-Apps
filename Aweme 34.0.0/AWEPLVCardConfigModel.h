@interface AWEPLVCardConfigModel : MTLModel
@property (nonatomic) AWEPLVCardGridConfigModel cardGridConfig;
@property (nonatomic) NSNumber cardStyle;
@property (nonatomic) BOOL cardCover;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)cardCover;
- (void)setCardCover:;
- (id)cardGridConfig;
- (void)setCardGridConfig:;
- (void).cxx_destruct;
- (id)cardStyle;
- (void)setCardStyle:;
+ (id)cardGridConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
