@interface AWEPOICityDetailTagItemView : UIView
@property (nonatomic) AWEPOICityDetailTagItem tagItem;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) UIView selectedView;
@property (nonatomic) @? clickBlock;
- (void)setSelectedView:;
- (void)setClickBlock:;
- (id)clickBlock;
- (void)setTagItem:;
- (void)buildSubviews;
- (void)fillData;
- (id)tagItem;
- (void)setupSelectedStyle:;
- (id)initWithTagItem:selectedView:clickBlock:;
- (id)textLabel;
- (void).cxx_destruct;
- (void)setTextLabel:;
- (id)selectedView;
- (void)tapAction:;
@end
