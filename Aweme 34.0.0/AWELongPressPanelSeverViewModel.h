@interface AWELongPressPanelSeverViewModel : AWELongPressPanelBaseViewModel
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)longPressFriendsAction;
- (BOOL)needShow;
- (void)confirmButtonDidClicked;
- (void)linkLabelDidTapped;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (id)guideShowCountStorageKey;
- (void)trackRemoveFriendsEventWithTrackType:;
+ (BOOL)shouldShowFriendsWithAwemeModel:referString:;
+ (id)longPressPanelViewModel;
@end
