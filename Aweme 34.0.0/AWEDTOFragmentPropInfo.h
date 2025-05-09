@interface AWEDTOFragmentPropInfo : MTLModel
@property (nonatomic) NSString recId;
@property (nonatomic) NSString gradeKey;
@property (nonatomic) q propTabOrder;
@property (nonatomic) q propImprPosition;
@property (nonatomic) NSString propSource;
@property (nonatomic) BOOL isAutoUseProp;
@property (nonatomic) NSString searchParams;
@property (nonatomic) NSString propProvider;
@property (nonatomic) NSString propZipSize;
@property (nonatomic) NSString propType;
@property (nonatomic) NSString effectUgcPath;
@property (nonatomic) NSDictionary metricsDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)searchParams;
- (void)setSearchParams:;
- (id)recId;
- (void)setRecId:;
- (id)gradeKey;
- (void)setGradeKey:;
- (long long)propTabOrder;
- (void)setPropTabOrder:;
- (long long)propImprPosition;
- (void)setPropImprPosition:;
- (id)propSource;
- (void)setPropSource:;
- (BOOL)isAutoUseProp;
- (void)setIsAutoUseProp:;
- (id)propProvider;
- (void)setPropProvider:;
- (id)propZipSize;
- (void)setPropZipSize:;
- (id)propType;
- (void)setPropType:;
- (id)effectUgcPath;
- (void)setEffectUgcPath:;
- (void).cxx_destruct;
- (id)metricsDict;
- (void)setMetricsDict:;
+ (id)JSONKeyPathsByPropertyKey;
@end
