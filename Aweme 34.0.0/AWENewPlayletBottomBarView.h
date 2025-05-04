@interface AWENewPlayletBottomBarView : AWEBottomContainerBaseView
@property (nonatomic) <AWEBottomContainerViewLifeCycleDelegate> lifeCycleDelegate;
@property (nonatomic) <AWEBottomContainerTrackLynxTapDelegate> trackLynxTapDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)trackShowEvent;
- (void)updateRawData:extraParams:inController:;
- (void)updateEnterModelWithAwemeModel:referString:;
- (id)templateURL;
@end
