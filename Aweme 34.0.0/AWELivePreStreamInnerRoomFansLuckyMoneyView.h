@interface AWELivePreStreamInnerRoomFansLuckyMoneyView : UIView
@property (nonatomic) BOOL hasClicked;
@property (nonatomic) UIView activityContainer;
@property (nonatomic) UIImageView activityIcon;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) @? isClickedArea;
- (BOOL)hasClicked;
- (void)setHasClicked:;
- (void)p_setupView;
- (id)activityContainer;
- (void)setActivityContainer:;
- (id)isClickedArea;
- (void)setIsClickedArea:;
- (void)updateDisplayText:iconUrl:;
- (id)textLabel;
- (id)init;
- (void)setActivityIcon:;
- (id)activityIcon;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (void)setTextLabel:;
@end
