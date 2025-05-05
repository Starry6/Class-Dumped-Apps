@interface MLArrayDictionaryFeatureProvider : NSObject
@property (nonatomic) NSArray array;
@property (nonatomic) q count;
- (id)array;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (long long)count;
- (id)featuresAtIndex:;
- (id)initWithDictionaryFeatureProviderArray:;
+ (BOOL)supportsSecureCoding;
@end
