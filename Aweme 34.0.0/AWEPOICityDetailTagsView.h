@interface AWEPOICityDetailTagsView : DitoComponentView
@property (nonatomic) AWEPOICityDetailTagsViewModel tagsViewModel;
@property (nonatomic) UIView contentView;
@property (nonatomic) UIView selectedView;
- (void)setSelectedView:;
- (void)updateViewModel:;
- (void)fillData:;
- (void)buildSubviews;
- (id)tagsViewModel;
- (void)setTagsViewModel:;
- (void)trackTagItemViewShow;
- (void)removeAllTagItemViews;
- (id)stickView;
- (id)initWithFrame:;
- (id)contentView;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)layoutSubviews;
- (id)selectedView;
@end
