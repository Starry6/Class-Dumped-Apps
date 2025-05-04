@interface AWEEditAndPublishViewActionContainerModel : NSObject
@property (nonatomic) UIView topView;
@property (nonatomic) UILabel bottomLabel;
@property (nonatomic) UIView actionItemView;
@property (nonatomic) AWEEditAndPublishViewData data;
- (void)setActionItemView:;
- (id)actionItemView;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
- (id)topView;
- (void)setTopView:;
- (void)setBottomLabel:;
- (id)bottomLabel;
@end
