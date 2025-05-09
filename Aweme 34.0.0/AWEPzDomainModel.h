@interface AWEPzDomainModel : MTLModel
@property (nonatomic) NSString name;
@property (nonatomic) NSArray componentList;
@property (nonatomic) NSArray strategyList;
@property (nonatomic) q maxRecordCount;
@property (nonatomic) q maxRecordTime;
@property (nonatomic) NSString dataHash;
@property (nonatomic) NSNumber domainStatus;
@property (nonatomic) NSDictionary rawDataValue;
@property (nonatomic) BOOL isFromOldCache;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)strategyList;
- (void)setStrategyList:;
- (void)setMaxRecordTime:;
- (long long)maxRecordTime;
- (long long)maxRecordCount;
- (void)setComponentList:;
- (id)domainStatus;
- (void)setMaxRecordCount:;
- (void)setDomainStatus:;
- (id)rawDataValue;
- (void)setRawDataValue:;
- (BOOL)isFromOldCache;
- (void)setIsFromOldCache:;
- (id)description;
- (id)dataHash;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (id)componentList;
- (void)setDataHash:;
+ (id)componentListJSONTransformer;
+ (id)strategyListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
