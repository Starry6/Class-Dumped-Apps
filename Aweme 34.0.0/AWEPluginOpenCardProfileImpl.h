@interface AWEPluginOpenCardProfileImpl : NSObject
@property (nonatomic) AWEPluginOpenCardProfileView view;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bdp_openCardProfileWithInfo:withViewController:onStateChange:;
- (BOOL)isOpen;
- (id)view;
- (void)setView:;
- (void).cxx_destruct;
+ (id)sharedPlugin;
@end
