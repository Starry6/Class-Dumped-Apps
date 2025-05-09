@interface AWEPaySpecialMediaView : UIView
@property (nonatomic) Q charIndex;
@property (nonatomic) NSTimer playTimer;
@property (nonatomic) LOTAnimationView lotView;
@property (nonatomic) UIImageView avatar;
@property (nonatomic) UILabel ownerLabel;
@property (nonatomic) UILabel suffixLabel;
@property (nonatomic) AWEPayAnimateTextView wishesContainer;
@property (nonatomic) UILabel wishesLabel;
@property (nonatomic) AWEPayLoadingButton specialConfirmBtn;
@property (nonatomic) DUXBaseButton closeBtn;
@property (nonatomic) NSString wishesText;
@property (nonatomic) double textAnimationTime;
@property (nonatomic) double delayTime;
@property (nonatomic) @? openRedPackageBlock;
@property (nonatomic) @? closeBlock;
@property (nonatomic) @? trackerBlock;
- (void)setCloseBlock:;
- (id)closeBlock;
- (id)closeBtn;
- (void)setCloseBtn:;
- (id)ownerLabel;
- (void)setOwnerLabel:;
- (id)suffixLabel;
- (void)setSuffixLabel:;
- (void)p_dismiss;
- (id)wishesLabel;
- (id)trackerBlock;
- (void)setTrackerBlock:;
- (void)setWishesLabel:;
- (void)setLotView:;
- (id)wishesContainer;
- (id)specialConfirmBtn;
- (void)setTextAnimationTime:;
- (void)setWishesText:;
- (id)openRedPackageBlock;
- (void)setOpenRedPackageBlock:;
- (void)p_deactivateTimer;
- (void)releaseAnimate;
- (double)textAnimationTime;
- (id)lotView;
- (void)p_activateTimer;
- (void)p_animateText;
- (id)wishesText;
- (void)p_open;
- (void)p_generateChar;
- (void)setWishesContainer:;
- (void)setSpecialConfirmBtn:;
- (void)play;
- (void).cxx_destruct;
- (void)setDelayTime:;
- (double)delayTime;
- (unsigned long long)charIndex;
- (void)setCharIndex:;
- (id)avatar;
- (void)setAvatar:;
- (id)playTimer;
- (void)setPlayTimer:;
@end
