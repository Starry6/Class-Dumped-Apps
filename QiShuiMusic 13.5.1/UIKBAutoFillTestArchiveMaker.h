@interface UIKBAutoFillTestArchiveMaker : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)archiver:willEncodeObject:;
- (void).cxx_destruct;
- (id)initWithViewControllerToSnapshot:;
- (id)makeArchive;
- (id)_cloneView:;
- (void)_applyPropertiesFromView:toView:;
- (void)_applyPropertiesFromLabel:toLabel:;
- (id)_cloneLabel:;
- (id)_cloneTextField:;
- (id)_cloneTextView:;
- (id)_cloneButton:;
- (id)_cloneGenericView:;
- (id)_cloneTableView:;
- (id)_cloneViewHierarchyFromRootView:;
- (id)_cloneBarButtonItem:;
- (id)_cloneNavigationItem:;
- (id)_makeCopyOfObject:;
+ (id)archiveMakerWithViewControllerToSnapshot:;
@end
