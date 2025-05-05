@interface UIAlertControllerDescriptor : NSObject
@property (nonatomic) BOOL hasHeaderContentViewController;
@property (nonatomic) BOOL hasTitle;
@property (nonatomic) BOOL hasMessage;
@property (nonatomic) BOOL hasContentViewController;
@property (nonatomic) q numberOfActions;
@property (nonatomic) BOOL applicationIsFullscreen;
@property (nonatomic) {UIEdgeInsets=dddd} containerViewSafeAreaInsets;
- (BOOL)isEqual:;
- (BOOL)hasTitle;
- (id)copyWithZone:;
- (BOOL)hasHeaderContentViewController;
- (void)setHasHeaderContentViewController:;
- (void)setHasTitle:;
- (BOOL)hasMessage;
- (void)setHasMessage:;
- (BOOL)hasContentViewController;
- (void)setHasContentViewController:;
- (long long)numberOfActions;
- (void)setNumberOfActions:;
- (BOOL)applicationIsFullscreen;
- (void)setApplicationIsFullscreen:;
- (id)containerViewSafeAreaInsets;
- (void)setContainerViewSafeAreaInsets:;
@end
