@interface UIDraggingBeginningSessionConfiguration : UIDraggingSessionConfiguration
@property (nonatomic) {CAPoint3D=ddd} initialCentroidInSourceWindow;
@property (nonatomic) q dataOwner;
@property (nonatomic) UIView sourceView;
@property (nonatomic) NSArray items;
- (id)items;
- (id)sourceView;
- (void).cxx_destruct;
- (long long)dataOwner;
- (id)initWithItems:dataOwner:requiredContextIds:sourceView:;
- (id)initialCentroidInSourceWindow;
- (void)setInitialCentroidInSourceWindow:;
+ (id)configurationWithItems:dataOwner:touches:requiredContextIds:sourceView:;
+ (id)configurationWithItems:dataOwner:initialCentroidInSourceWindow:requiredContextIds:sourceView:accessibilityEndpoint:;
+ (id)configurationWithItems:dataOwner:pointerTouch:requiredContextIds:sourceView:;
@end
