@interface AWETemplateSubviewLayoutConfig : NSObject
@property (nonatomic) UIView rightView;
@property (nonatomic) double rightMargin;
@property (nonatomic) float rightPriority;
@property (nonatomic) UIView leftView;
@property (nonatomic) double leftMargin;
@property (nonatomic) float leftPriority;
- (float)rightPriority;
- (void)setRightPriority:;
- (float)leftPriority;
- (void)setLeftPriority:;
- (double)leftMargin;
- (void)setLeftMargin:;
- (void).cxx_destruct;
- (double)rightMargin;
- (void)setRightMargin:;
- (id)leftView;
- (id)rightView;
- (void)setLeftView:;
- (void)setRightView:;
@end
