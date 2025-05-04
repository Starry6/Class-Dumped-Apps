@interface AWEFeature : NSObject
- (unsigned long long)featureType;
- (id)view;
- (id)initWithContext:;
- (id)viewController;
+ (id)instanceConfigs;
+ (id)aliasName;
@end
