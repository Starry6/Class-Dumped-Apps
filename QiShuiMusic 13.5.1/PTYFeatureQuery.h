@interface PTYFeatureQuery : NSObject
@property (nonatomic) NSString insKeyName;
@property (nonatomic) NSString featureName;
@property (nonatomic) NSString subFeatureName;
@property (nonatomic) Q qType;
@property (nonatomic) Q rType;
@property (nonatomic) Q n;
@property (nonatomic) NSDictionary extParams;
- (id)extParams;
- (id)insKeyName;
- (unsigned long long)qType;
- (unsigned long long)rType;
- (void)setExtParams:;
- (void)setInsKeyName:;
- (void)setQType:;
- (void)setRType:;
- (void)setSubFeatureName:;
- (id)subFeatureName;
- (id)featureName;
- (void)setFeatureName:;
- (void).cxx_destruct;
- (unsigned long long)n;
- (void)setN:;
@end
