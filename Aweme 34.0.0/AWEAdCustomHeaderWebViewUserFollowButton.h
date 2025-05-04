@interface AWEAdCustomHeaderWebViewUserFollowButton : UIView
@property (nonatomic) UILabel textLabel;
@property (nonatomic) UIImageView followIcon;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) @? followedCompletion;
@property (nonatomic) NSString barType;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)updateFollowStatus;
- (void)setBarType:;
- (void)setFollowedCompletion:;
- (id)followIcon;
- (void)setupUIWithModel:;
- (void)followUserIfNeed;
- (void)updateViewWithFollowedStatus;
- (void)updateViewWithUnFollowStatus;
- (id)followedCompletion;
- (void)setFollowIcon:;
- (id)textLabel;
- (id)barType;
- (id)initWithModel:;
- (void).cxx_destruct;
- (void)setTextLabel:;
@end
