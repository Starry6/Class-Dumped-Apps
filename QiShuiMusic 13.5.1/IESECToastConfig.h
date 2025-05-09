@interface IESECToastConfig : NSObject
@property (nonatomic) q style;
@property (nonatomic) double maxWidthPercentage;
@property (nonatomic) double maxHeightPercentage;
@property (nonatomic) double leftPadding;
@property (nonatomic) double rightPadding;
@property (nonatomic) double topPadding;
@property (nonatomic) double bottomPadding;
@property (nonatomic) double middlePadding;
@property (nonatomic) {CGSize=dd} iconSize;
@property (nonatomic) double cornerRadius;
@property (nonatomic) UIColor toastBackgroundColor;
@property (nonatomic) UIColor contentColor;
@property (nonatomic) UIFont contentFont;
@property (nonatomic) double showDuration;
@property (nonatomic) {CGPoint=dd} centerOffset;
@property (nonatomic) q layoutStyle;
@property (nonatomic) @? extraConfigBlock;
@property (nonatomic) @? afterShowBlock;
@property (nonatomic) @? beforeShowBlock;
- (id)beforeShowBlock;
- (void)setContentFont:;
- (void)setLeftPadding:;
- (id)afterShowBlock;
- (id)contentFont;
- (id)extraConfigBlock;
- (double)maxHeightPercentage;
- (double)maxWidthPercentage;
- (void)setAfterShowBlock:;
- (void)setBeforeShowBlock:;
- (void)setExtraConfigBlock:;
- (void)setMaxHeightPercentage:;
- (void)setMaxWidthPercentage:;
- (void)setMiddlePadding:;
- (void)setRightPadding:;
- (void)setShowDuration:;
- (void)setToastBackgroundColor:;
- (double)showDuration;
- (id)toastBackgroundColor;
- (double)topPadding;
- (void)setIconSize:;
- (id)iconSize;
- (id)init;
- (void)setContentColor:;
- (long long)layoutStyle;
- (void)setLayoutStyle:;
- (void)setStyle:;
- (id)centerOffset;
- (double)bottomPadding;
- (id)contentColor;
- (void)setCornerRadius:;
- (void).cxx_destruct;
- (void)setCenterOffset:;
- (double)cornerRadius;
- (long long)style;
- (double)middlePadding;
- (void)setBottomPadding:;
- (void)setTopPadding:;
- (double)leftPadding;
- (double)rightPadding;
@end
