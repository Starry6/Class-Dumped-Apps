@interface CIFeatureProviderMultiArray : NSObject
@property (nonatomic) MLMultiArray multiArray;
@property (nonatomic) NSString name;
@property (nonatomic) NSSet featureNames;
- (void)setName:;
- (id)featureValueForName:;
- (id)featureNames;
- (id)name;
- (id)initWithName:array:;
- (id)multiArray;
- (void)setMultiArray:;
@end
