@interface AWEPadLeftSideBarAdapter : NSObject
@property (nonatomic) BOOL enable;
@property (nonatomic) double leftSideBarWidth;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)leftSideBarWidth;
- (void)performNormalExecution:;
- (void)layoutSideBarTransition:originX:;
- (void)setupBottomBarView;
- (void)updateBottomBarView:;
- (void)updateBottomBarViewAfterRotateTransition;
- (BOOL)enable;
- (id)weakTarget;
+ (Class)weakTargetClass;
+ (id)getAdapter;
@end
