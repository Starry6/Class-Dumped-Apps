@interface AWEPadListViewSectionModel : MTLModel
@property (nonatomic) q sectionType;
@property (nonatomic) q sectionInteractType;
@property (nonatomic) NSString identifier;
@property (nonatomic) AWEPadPolymericChannelCardSizeFormulaModel cardSizeFormula;
@property (nonatomic) NSArray cardList;
@property (nonatomic) AWEPadListViewHeaderModel sectionHeader;
@property (nonatomic) NSDictionary sectionConfigRawData;
@property (nonatomic) NSDictionary logPB;
@property (nonatomic) AWEPLVSectionGridConfigModel sectionGridConfig;
@property (nonatomic) NSDictionary cardConfig;
@property (nonatomic) BOOL enableLight;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cardList;
- (void)setCardConfig:;
- (id)cardConfig;
- (void)setCardList:;
- (id)logPB;
- (void)setLogPB:;
- (id)cardSizeFormula;
- (long long)sectionInteractType;
- (void)setSectionInteractType:;
- (void)setCardSizeFormula:;
- (id)sectionConfigRawData;
- (void)setSectionConfigRawData:;
- (id)sectionGridConfig;
- (void)setSectionGridConfig:;
- (BOOL)enableLight;
- (void)setEnableLight:;
- (void)setIdentifier:;
- (long long)sectionType;
- (id)identifier;
- (void)setSectionType:;
- (void).cxx_destruct;
- (id)sectionHeader;
- (void)setSectionHeader:;
+ (id)cardListJSONTransformer;
+ (id)sectionHeaderJSONTransformer;
+ (id)sectionGridConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
