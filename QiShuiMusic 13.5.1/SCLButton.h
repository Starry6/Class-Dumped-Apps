@interface SCLButton : UIButton
@property (nonatomic) q actionType;
@property (nonatomic) @? actionBlock;
@property (nonatomic) @? validationBlock;
@property (nonatomic) @? completeButtonFormatBlock;
@property (nonatomic) @? buttonFormatBlock;
@property (nonatomic) UIColor defaultBackgroundColor;
@property (nonatomic) @ target;
@property (nonatomic) : selector;
@property (nonatomic) SCLTimerDisplay timer;
- (id)init;
- (id)initWithWindowWidth:;
- (id)initWithCoder:;
- (id)initWithFrame:;
- (void)setupWithWindowWidth:;
- (void)adjustWidthWithWindowWidth:numberOfButtons:;
- (void)setTitle:forState:;
- (void)setHighlighted:;
- (void)setDefaultBackgroundColor:;
- (void)setTimer:;
- (void)parseConfig:;
- (id)darkerColorForColor:;
- (id)lighterColorForColor:;
- (long long)actionType;
- (void)setActionType:;
- (id)actionBlock;
- (void)setActionBlock:;
- (id)validationBlock;
- (void)setValidationBlock:;
- (id)completeButtonFormatBlock;
- (void)setCompleteButtonFormatBlock:;
- (id)buttonFormatBlock;
- (void)setButtonFormatBlock:;
- (id)defaultBackgroundColor;
- (id)target;
- (void)setTarget:;
- (SEL)selector;
- (void)setSelector:;
- (id)timer;
- (void).cxx_destruct;
@end
