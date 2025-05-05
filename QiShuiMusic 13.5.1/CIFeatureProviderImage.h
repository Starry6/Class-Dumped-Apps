@interface CIFeatureProviderImage : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) ^{__CVBuffer=} buffer;
@property (nonatomic) NSSet featureNames;
- (void)setBuffer:;
- (id)buffer;
- (void)setName:;
- (id)featureValueForName:;
- (id)featureNames;
- (id)name;
- (id)initWithName:buffer:;
@end
