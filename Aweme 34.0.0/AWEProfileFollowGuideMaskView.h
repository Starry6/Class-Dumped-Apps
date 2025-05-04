@interface AWEProfileFollowGuideMaskView : AWEUserRecommendBaseCellView
@property (nonatomic) AWEUserModel user;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) <AWEProfileFollowGuideMaskViewDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishFollowUser:status:error:;
- (void)didFinishUnFollowUser:status:error:;
- (void)didFinishBlockUser:status:;
- (void)didFinishSetRemarkWithUser:;
- (void)p_configUI;
- (void)displayWithUser:;
- (void)p_followBtnClicked;
- (void)p_updateActionButtonStates;
- (id)user;
- (void)setUser:;
- (id)init;
- (BOOL)isShowing;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:layout:;
- (void)dismiss;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setIsShowing:;
@end
