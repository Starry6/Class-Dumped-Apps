@interface AWEListenFeedAuthorElement : AWEListenFeedInteractionBaseElement
@property (nonatomic) UILabel authorNameLabel;
@property (nonatomic) DUXTextTag followTag;
- (void)didClickFollowButton;
- (void)setAuthorNameLabel:;
- (id)authorNameLabel;
- (id)followTag;
- (void)handleFollowedNotification:;
- (void)handleUnFollowedNotification:;
- (void)didClickAuthorName;
- (void)updateWithModel:playModel:extendModelArray:mixVideoModel:currentModelIndex:context:;
- (void)updateWithModel:playModel:context:;
- (void)setFollowTag:;
- (void)update;
- (void)viewDidLoad;
- (void).cxx_destruct;
@end
