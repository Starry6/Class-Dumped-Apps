@interface AWELiveGuideActionsImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)willSwitchToOtherTab;
- (void)willStartLive;
- (void)cameraDidSet;
- (void)willCloseGuideViewController;
@end
