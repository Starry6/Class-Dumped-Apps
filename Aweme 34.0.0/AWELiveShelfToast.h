@interface AWELiveShelfToast : UIView
@property (nonatomic) NSString text;
@property (nonatomic) UIView showView;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) NSTimer autoHideTimer;
@property (nonatomic) double offsetY;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showOnView:;
- (id)showView;
- (void)setShowView:;
- (void)startAutoHide;
- (id)textLabel;
- (void)show;
- (void)setText:;
- (void)setup;
- (id)text;
- (id)initWithText:;
- (void).cxx_destruct;
- (void)setTextLabel:;
- (double)offsetY;
- (void)setOffsetY:;
- (id)autoHideTimer;
- (void)setAutoHideTimer:;
+ (void)showText:;
@end
