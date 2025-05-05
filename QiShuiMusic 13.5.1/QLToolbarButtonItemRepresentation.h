@interface QLToolbarButtonItemRepresentation : UIBarButtonItem
@property (nonatomic) NSString identifier;
@property (nonatomic) Q placement;
@property (nonatomic) BOOL disappearsOnTap;
@property (nonatomic) QLToolbarButton originalButton;
@property (nonatomic) UILongPressGestureRecognizer longPressGestureRecognizer;
@property (nonatomic) UIViewController<QLToolbarButtonDelegate> presentingViewController;
- (unsigned long long)placement;
- (id)presentingViewController;
- (id)longPressGestureRecognizer;
- (void)setPlacement:;
- (void)setPresentingViewController:;
- (void)setLongPressGestureRecognizer:;
- (id)identifier;
- (void).cxx_destruct;
- (void)setIdentifier:;
- (BOOL)isEqual:;
- (void)setLongPressTarget:action:;
- (BOOL)disappearsOnTap;
- (void)setDisappearsOnTap:;
- (id)originalButton;
- (void)setOriginalButton:;
@end
