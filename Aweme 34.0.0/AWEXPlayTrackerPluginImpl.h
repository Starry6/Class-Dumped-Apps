@interface AWEXPlayTrackerPluginImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)xplay_trackEvent:params:;
+ (id)sharedPlugin;
+ (void)_aweLazyRegisterStaticLoad;
@end
