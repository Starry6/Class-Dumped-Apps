@interface AWEXPlayABTestPluginImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)xplay_getExperimentValueForKey:withExposure:;
+ (id)sharedPlugin;
+ (void)_aweLazyRegisterStaticLoad;
@end
