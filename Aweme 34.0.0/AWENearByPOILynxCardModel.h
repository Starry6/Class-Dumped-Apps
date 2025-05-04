@interface AWENearByPOILynxCardModel : MTLModel
@property (nonatomic) q cardType;
@property (nonatomic) q indexToInsert;
@property (nonatomic) AWEPOILynxModel lynxData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)lynxData;
- (void)setLynxData:;
- (id)identifierForLynxView;
- (long long)indexToInsert;
- (void)setIndexToInsert:;
- (void).cxx_destruct;
- (long long)cardType;
- (void)setCardType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
