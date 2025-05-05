@interface IESECSimpleFeatureQuery : NSObject
@property (nonatomic) NSString featureName;
@property (nonatomic) NSString businessName;
@property (nonatomic) q sampleRange;
@property (nonatomic) NSDictionary extraParams;
@property (nonatomic) Q returnType;
- (void)setExtraParams:;
- (void)setSampleRange:;
- (id)extraParams;
- (id)initWithFeatureName:businessName:extraParams:returnType:;
- (long long)sampleRange;
- (id)init;
- (void)setReturnType:;
- (unsigned long long)returnType;
- (id)featureName;
- (void)setFeatureName:;
- (void).cxx_destruct;
- (id)businessName;
- (void)setBusinessName:;
@end
