@interface YYSelectionGrabber : UIView
@property (nonatomic) YYSelectionGrabberDot dot;
@property (nonatomic) Q dotDirection;
@property (nonatomic) UIColor color;
- (unsigned long long)dotDirection;
- (void)setDotDirection:;
- (void)layoutSubviews;
- (void)setColor:;
- (id)initWithFrame:;
- (id)color;
- (void).cxx_destruct;
- (id)dot;
- (id)touchRect;
@end
