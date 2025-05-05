@interface EventTargetDetail : NSObject
@property (nonatomic) {CGPoint=dd} downPoint;
@property (nonatomic) {CGPoint=dd} preTouchPoint;
@property (nonatomic) NSNumber identifier;
@property (nonatomic) <LynxEventTarget> ui;
- (id)downPoint;
- (id)initWithUI:;
- (id)preTouchPoint;
- (void)setDownPoint:;
- (void)setPreTouchPoint:;
- (id)identifier;
- (void).cxx_destruct;
- (id)ui;
- (void)setIdentifier:;
- (void)setUi:;
@end
