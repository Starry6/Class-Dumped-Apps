@interface AWENormalModeTabBarButton : UIButton
@property (nonatomic) UITapGestureRecognizer singleTapGes;
@property (nonatomic) UITapGestureRecognizer doubleTapGes;
@property (nonatomic) UILongPressGestureRecognizer longPressGes;
@property (nonatomic) <AWETabBarButtonDelegate> delegate;
@property (nonatomic) q type;
@property (nonatomic) q index;
@property (nonatomic) q validIndex;
@property (nonatomic) q status;
@property (nonatomic) UIViewController viewController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)singleTapGes;
- (void)onTouchUpInside;
- (BOOL)canHandleDoubleClick;
- (id)doubleTapGes;
- (BOOL)canHandleLongPress;
- (id)longPressGes;
- (void)addLongPressGes;
- (void)removeLongPressGes;
- (void)handleDoubleClick;
- (void)doubleTapButton:;
- (void)longPressButton:;
- (void)addDoubleClickGes;
- (void)removeDoubleClickGes;
- (void)updateLongPressGes;
- (long long)validIndex;
- (void)setValidIndex:;
- (void)setSingleTapGes:;
- (void)setDoubleTapGes:;
- (void)setLongPressGes:;
- (void)setIndex:;
- (long long)index;
- (id)delegate;
- (void)setStatus:;
- (id)initWithFrame:;
- (id)viewController;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:shouldReceiveTouch:;
- (long long)status;
- (void)setDelegate:;
- (void)setViewController:;
+ (id)buttonWithFrame:viewController:type:;
@end
