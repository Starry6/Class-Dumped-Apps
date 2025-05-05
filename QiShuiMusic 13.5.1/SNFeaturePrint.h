@interface SNFeaturePrint : NSObject
@property (nonatomic) q featurePrintType;
@property (nonatomic) MLMultiArray featureVector;
@property (nonatomic) {?={?=qiIq}{?=qiIq}} timeRange;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)timeRange;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)setTimeRange:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)featureVector;
- (long long)featurePrintType;
- (id)initWithFeaturePrintType:featureVector:;
+ (BOOL)supportsSecureCoding;
@end
