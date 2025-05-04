@interface AWEPostPagePaymentElement : AWEPostPageCellElement
@property (nonatomic) AWENewPublishTableCell paymentCell;
@property (nonatomic) <ACCEditServiceProtocol> editService;
- (id)editService;
- (void)setEditService:;
- (void)bindServices:;
- (id)reeditService;
- (void)setupCell:;
- (BOOL)forceReceiveEvents;
- (void)reloadPaymentItemIfNeeded:;
- (id)paymentCell;
- (void)setPaymentCell:;
- (id)service;
- (void)viewDidLoad;
- (BOOL)isVisible;
- (void).cxx_destruct;
- (BOOL)isEnabled;
- (id)cell;
- (void)didSelect;
+ (void)_aweLazyRegisterPostPage;
+ (id)type;
@end
