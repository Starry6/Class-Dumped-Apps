@interface IESMultiLinkerTeamTaskNoticeView : UIView
@property (nonatomic) UIImageView giftIcon;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) BOOL isOptimizedPad;
- (id)giftIcon;
- (BOOL)isOptimizedPad;
- (void)setGiftIcon:;
- (void)setIsOptimizedPad:;
- (void)updateLayoutToSmallStyle:;
- (id)textLabel;
- (id)init;
- (void).cxx_destruct;
- (void)setTextLabel:;
- (void)setupUI;
- (void)updateText:;
@end
