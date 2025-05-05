@interface WKActionSheet : UIAlertController
@property (nonatomic) <WKActionSheetDelegate> sheetDelegate;
@property (nonatomic) Q arrowDirections;
- (void)_cleanup;
- (void)willRotate;
- (void)didRotate;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)updateSheetPosition;
- (void)_didRotateAndLayout;
- (BOOL)presentSheetFromRect:;
- (unsigned long long)arrowDirections;
- (void)setArrowDirections:;
- (BOOL)presentSheet:;
- (id)_presentationRectForStyle:;
- (void)doneWithSheet:;
- (id)sheetDelegate;
- (void)setSheetDelegate:;
@end
