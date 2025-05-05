@interface UgenFrameLayoutWidget : UgenLayoutWidget
- (void)addwidget:;
- (void)bindAttributeValue:forKey:;
- (void)didDisAppear;
- (void)p_configureFrameLayout:;
- (id)p_constraintDicWithConstraint:visualFormat:metrics:views:;
- (void)layout;
- (void)didAppear;
- (void)render;
- (Class)containerViewClass;
+ (id)createRootWidgetWithSize:;
+ (id)createRootWidgetWithSize:wrapContent:;
@end
