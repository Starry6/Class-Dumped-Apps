@interface AWEMVLocalExperiment : MTLModel
@property (nonatomic) NSString name;
@property (nonatomic) NSArray percents;
@property (nonatomic) NSArray values;
@property (nonatomic) NSNumber baseVid;
@property (nonatomic) NSNumber minVersion;
@property (nonatomic) NSNumber maxVersion;
@property (nonatomic) NSArray excludedVersions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)percents;
- (void)setPercents:;
- (id)baseVid;
- (void)setBaseVid:;
- (id)excludedVersions;
- (void)setExcludedVersions:;
- (id)minVersion;
- (id)maxVersion;
- (void)setMaxVersion:;
- (id)values;
- (void)setValues:;
- (void)setMinVersion:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
+ (id)JSONKeyPathsByPropertyKey;
@end
