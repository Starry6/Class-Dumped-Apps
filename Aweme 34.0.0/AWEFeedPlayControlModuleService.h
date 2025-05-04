@interface AWEFeedPlayControlModuleService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)createFastSpeedView;
- (Class)speedManagerClass;
- (id)getAFDPinchZoomEventTracker;
- (id)getSharedAFDSpeedManager;
- (id)createSpeedManager;
- (Class)pureModePageTrackHelperClass;
- (id)createRoundSpeedButtonWithViewWidth:textFont:;
- (id)cancelAwemeMuteView;
- (Class)longPressFastSpeedHelperClass;
- (id)getAFDAudioManager;
@end
