@interface AWEGrootSpeciesBottomBarView : AWEBottomContainerBaseView
@property (nonatomic) <AWEBottomContainerViewLifeCycleDelegate> lifeCycleDelegate;
@property (nonatomic) <AWEBottomContainerTrackLynxTapDelegate> trackLynxTapDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)trackShowEvent;
- (id)globalPropsForInitialize;
- (id)getGrootBarSchema;
- (void)updateRawData:extraParams:inController:;
- (id)templateURL;
@end
