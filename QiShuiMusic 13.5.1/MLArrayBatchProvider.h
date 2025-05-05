@interface MLArrayBatchProvider : NSObject
@property (nonatomic) NSArray array;
@property (nonatomic) q count;
- (id)initWithDictionary:error:;
- (id)array;
- (void).cxx_destruct;
- (long long)count;
- (id)featuresAtIndex:;
- (id)initWithFeatureProviderArray:;
@end
