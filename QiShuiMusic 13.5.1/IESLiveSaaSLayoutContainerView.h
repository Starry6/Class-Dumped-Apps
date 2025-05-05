@interface IESLiveSaaSLayoutContainerView : UIView
@property (nonatomic) IESLiveSaaSLayoutContainerItem item;
@property (nonatomic) @? willRemoveFromSuperView;
- (void)setWillRemoveFromSuperView:;
- (id)willRemoveFromSuperView;
- (id)item;
- (void)willRemoveSubview:;
- (id)hitTest:withEvent:;
- (void)setItem:;
- (void).cxx_destruct;
- (id)description;
@end
