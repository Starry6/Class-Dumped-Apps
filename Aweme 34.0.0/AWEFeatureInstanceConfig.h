@interface AWEFeatureInstanceConfig : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) # featureClass;
@property (nonatomic) @ instance;
@property (nonatomic) NSArray injectionInfos;
- (void)setFeatureClass:;
- (id)injectionInfos;
- (Class)featureClass;
- (void)setInjectionInfos:;
- (void)setInstance:;
- (void)setIdentifier:;
- (id)instance;
- (id)identifier;
- (void).cxx_destruct;
@end
