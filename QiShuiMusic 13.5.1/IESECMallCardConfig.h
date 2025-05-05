@interface IESECMallCardConfig : MTLModel
@property (nonatomic) NSString lynxSchema;
@property (nonatomic) NSString lynxSchemaPPE;
@property (nonatomic) NSString cardName;
@property (nonatomic) q itemType;
@property (nonatomic) double predictHeight;
@property (nonatomic) NSDictionary queryMap;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)lynxSchema;
- (id)lynxSchemaPPE;
- (double)predictHeight;
- (id)queryMap;
- (void)setLynxSchema:;
- (void)setLynxSchemaPPE:;
- (void)setPredictHeight:;
- (void)setQueryMap:;
- (void)setItemType:;
- (long long)itemType;
- (void).cxx_destruct;
- (id)cardName;
- (void)setCardName:;
+ (id)JSONKeyPathsByPropertyKey;
@end
