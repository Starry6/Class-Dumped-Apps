@interface IESLiveSaaSTableViewDelegateProxy : NSObject
@property (nonatomic) <UITableViewDelegate> originDelegate;
@property (nonatomic) IESLiveSaaSPopupItem popupItem;
@property (nonatomic) q popupItemType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)originDelegate;
- (id)popupItem;
- (long long)popupItemType;
- (void)refreshDelegate:;
- (void)setOriginDelegate:;
- (void)setPopupItem:;
- (void)setPopupItemType:;
- (void)scrollViewDidEndDecelerating:;
- (BOOL)respondsToSelector:;
- (void)scrollViewWillBeginDecelerating:;
- (void)scrollViewDidScroll:;
- (void)scrollViewWillBeginDragging:;
- (void)scrollViewDidEndDragging:willDecelerate:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void).cxx_destruct;
- (id)initWithDelegate:;
- (id)forwardingTargetForSelector:;
@end
