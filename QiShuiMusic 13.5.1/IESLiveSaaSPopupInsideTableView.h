@interface IESLiveSaaSPopupInsideTableView : UITableView
@property (nonatomic) IESLiveSaaSTableViewDelegateProxy delegateProxy;
@property (nonatomic) q popupItemType;
- (void)didSetAttachingDIContext;
- (long long)popupItemType;
- (void)setPopupItemType:;
- (void)setDelegateProxy:;
- (void)setDelegate:;
- (id)initWithFrame:style:;
- (void).cxx_destruct;
- (id)delegateProxy;
@end
