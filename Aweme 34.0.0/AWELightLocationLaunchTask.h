@interface AWELightLocationLaunchTask : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)requestLightLocationWithAccuracy:;
+ (void)execute;
@end
