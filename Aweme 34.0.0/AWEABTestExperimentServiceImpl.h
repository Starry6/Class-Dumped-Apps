@interface AWEABTestExperimentServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getExperimentDataWithName:libraKey:defaultData:stable:;
+ (id)sharedInstance;
@end
