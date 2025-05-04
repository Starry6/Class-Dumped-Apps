@interface AWEUGPendantEdgeView : UIView
@property (nonatomic) Q state;
@property (nonatomic) UIColor bgColor;
@property (nonatomic) UIColor borderColor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)performUpdateToState:;
- (void)setBorderColor:;
- (id)borderColor;
- (id)initWithFrame:;
- (unsigned long long)state;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setState:;
- (void)setupUI;
- (id)bgColor;
- (void)setBgColor:;
@end
