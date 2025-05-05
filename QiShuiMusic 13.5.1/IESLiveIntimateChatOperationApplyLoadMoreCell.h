@interface IESLiveIntimateChatOperationApplyLoadMoreCell : UITableViewCell
@property (nonatomic) NSArray moreApplierAvatarURLsCached;
@property (nonatomic) BOOL hasMoreAppliersCached;
@property (nonatomic) UIView borderView;
@property (nonatomic) UIView containerView;
- (void)setMoreApplierAvatarURLsCached:;
- (BOOL)hasMoreAppliersCached;
- (id)moreApplierAvatarURLsCached;
- (void)setHasMoreAppliersCached:;
- (void)updateItem:;
- (id)initWithStyle:reuseIdentifier:;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (id)borderView;
- (void)setBorderView:;
+ (id)cellIdentifier;
@end
