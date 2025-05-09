@interface AWELandscapeReminder : UIView
@property (nonatomic) UILabel label;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UIView reminderContainer;
@property (nonatomic) UIView separatorLine;
@property (nonatomic) UIButton jumpBtn;
@property (nonatomic) @? jumpLabelBlock;
@property (nonatomic) BOOL needMixContinuePlayTip;
@property (nonatomic) BOOL isLockStatus;
@property (nonatomic) BOOL hasConfigUI;
@property (nonatomic) NSString text;
@property (nonatomic) NSAttributedString attributedText;
@property (nonatomic) BOOL isMixVideoAndSlideEnable;
@property (nonatomic) double scaleRatios;
@property (nonatomic) Q viewType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isMixVideoAndSlideEnable;
- (BOOL)hasConfigUI;
- (void)setHasConfigUI:;
- (void)configAppointmentUI;
- (void)configBackgroundUI;
- (void)configButtonUI;
- (BOOL)needMixContinuePlayTip;
- (void)setNeedMixContinuePlayTip:;
- (id)reminderContainer;
- (id)jumpBtn;
- (void)updateNeedMixContinuePlayTip:lockStatus:;
- (BOOL)fixUpdateLandscapeReminder;
- (void)configContinuePlayUIWithLockStatus:forceUpdate:;
- (void)setIsMixVideoAndSlideEnable:;
- (void)resetLabelLayout;
- (void)adjustTransform;
- (double)scaleRatios;
- (void)handleJumpTap;
- (id)jumpLabelBlock;
- (void)setJumpLabelBlock:;
- (BOOL)isReminderShowing;
- (void)setScaleRatios:;
- (void)updateReminderText:jumpTap:;
- (void)updateReminderText:buttonTitle:;
- (void)updateReminderText:buttonTitle:jumpTap:;
- (void)setReminderContainer:;
- (void)setJumpBtn:;
- (BOOL)isLockStatus;
- (void)setIsLockStatus:;
- (void)setLabel:;
- (id)attributedText;
- (void)setText:;
- (id)text;
- (double)preferredWidth;
- (id)label;
- (void)setAttributedText:;
- (id)iconImageView;
- (void).cxx_destruct;
- (void)reset;
- (unsigned long long)viewType;
- (void)setIconImageView:;
- (void)setViewType:;
- (id)separatorLine;
- (void)setSeparatorLine:;
@end
