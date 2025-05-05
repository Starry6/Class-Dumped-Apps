@interface IESLivePrivilegeEntranceBlankView : UIView
@property (nonatomic) <IESLivePrivilegeEntranceProfileViewEventHandler> delegate;
@property (nonatomic) IESLivePrivilegeEntranceProfileAnimationFactory animationFactory;
@property (nonatomic) NSString lastFansclubState;
@property (nonatomic) NSString lastVipState;
@property (nonatomic) NSNumber isShowing;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)lastFansclubState;
- (id)lastVipState;
- (void)setIsShowing:;
- (void)setLastFansclubState:;
- (void)setLastVipState:;
- (void)viewDidHideFromContainer:;
- (void)viewDidShowOnContainer:;
- (id)isShowing;
- (void)setAnimationFactory:;
- (id)animationFactory;
- (void)setDelegate:;
- (id)viewSize;
- (id)delegate;
- (void).cxx_destruct;
@end
