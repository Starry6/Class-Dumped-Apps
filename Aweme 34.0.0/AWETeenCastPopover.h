@interface AWETeenCastPopover : DUXPopover
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) UIView targetView;
- (void)setEnterFrom:;
- (id)enterFrom;
- (void)trackBubbleShowEvent;
- (BOOL)isFrequencyControlValid;
- (id)initWithTarget:clickBlock:;
- (void)setModel:;
- (void)show;
- (id)targetView;
- (id)model;
- (void)setTargetView:;
- (void)willMoveToWindow:;
- (void).cxx_destruct;
+ (BOOL)isShowing;
@end
