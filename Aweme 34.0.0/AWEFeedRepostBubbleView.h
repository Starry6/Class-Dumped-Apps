@interface AWEFeedRepostBubbleView : UIView
@property (nonatomic) UIImageView bubbleImageView;
@property (nonatomic) YYLabel contentLabel;
@property (nonatomic) YYLabel titleLabel;
@property (nonatomic) NSTimer dismissTimer;
@property (nonatomic) NSDictionary logDict;
- (id)logDict;
- (void)setLogDict:;
- (void)tapBubbleView:;
- (BOOL)isPure3xEmoji:;
- (void)configWithContent:;
- (void)dismissAnimatied:;
- (void)showOnView:content:dismissTime:logDict:;
- (id)init;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)dismissTimer;
- (void)setDismissTimer:;
- (id)contentLabel;
- (void)setContentLabel:;
- (id)bubbleImageView;
- (void)setBubbleImageView:;
+ (BOOL)requiresConstraintBasedLayout;
@end
