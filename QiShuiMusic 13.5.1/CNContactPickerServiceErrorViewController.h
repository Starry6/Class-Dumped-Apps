@interface CNContactPickerServiceErrorViewController : CNErrorViewController
@property (nonatomic) <CNContactPickerContentDelegate> delegate;
@property (nonatomic) UINavigationController navigationController;
@property (nonatomic) UIBarButtonItem addContactBarButtonItem;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)navigationController;
- (void)setDelegate:;
- (id)addContactBarButtonItem;
- (id)delegate;
- (void).cxx_destruct;
- (void)invalidate;
- (void)setupWithOptions:readyBlock:;
- (void)invalidateSelectionAnimated:;
@end
