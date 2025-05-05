@interface IGListSectionControllerThreadContext : NSObject
@property (nonatomic) UIViewController viewController;
@property (nonatomic) <IGListCollectionContext> collectionContext;
- (id)collectionContext;
- (void)setCollectionContext:;
- (void)setViewController:;
- (id)viewController;
- (void).cxx_destruct;
@end
