@interface PTYFeatureDescription : PTYMetaFeatureDescription
@property (nonatomic) Q featureSource;
@property (nonatomic) BOOL isDumpDB;
@property (nonatomic) Q maxCacheCount;
@property (nonatomic) NSArray subFeatures;
@property (nonatomic) Q divideTime;
@property (nonatomic) NSString startSessionEvent;
@property (nonatomic) NSString endSessionEvent;
- (id)endSessionEvent;
- (unsigned long long)divideTime;
- (unsigned long long)featureSource;
- (BOOL)isDumpDB;
- (unsigned long long)maxCacheCount;
- (void)setDivideTime:;
- (void)setEndSessionEvent:;
- (void)setFeatureSource:;
- (void)setIsDumpDB:;
- (void)setMaxCacheCount:;
- (void)setStartSessionEvent:;
- (id)startSessionEvent;
- (void).cxx_destruct;
- (id)subFeatures;
- (void)setSubFeatures:;
@end
