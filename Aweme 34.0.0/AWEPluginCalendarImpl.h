@interface AWEPluginCalendarImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showCalendarEventPopupForAppID:title:params:completion:;
+ (id)sharedPlugin;
@end
