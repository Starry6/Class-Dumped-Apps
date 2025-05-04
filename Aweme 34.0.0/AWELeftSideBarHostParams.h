@interface AWELeftSideBarHostParams : NSObject
@property (nonatomic) NSString identification;
@property (nonatomic) UIViewController hostVC;
@property (nonatomic) @? sidebarHostViewController;
@property (nonatomic) @? sidebarFromViewController;
@property (nonatomic) q transitionType;
@property (nonatomic) q displayPosition;
- (void)setIdentification:;
- (id)hostVC;
- (id)sidebarHostViewController;
- (void)setSidebarHostViewController:;
- (id)sidebarFromViewController;
- (void)setSidebarFromViewController:;
- (long long)displayPosition;
- (void)setDisplayPosition:;
- (void)setTransitionType:;
- (long long)transitionType;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)identification;
@end
