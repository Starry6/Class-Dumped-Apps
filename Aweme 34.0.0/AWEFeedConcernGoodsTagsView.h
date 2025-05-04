@interface AWEFeedConcernGoodsTagsView : UIView
@property (nonatomic) NSArray tags;
- (void)configTagsViewWithTags:;
- (id)tags;
- (id)initWithFrame:;
- (void)setTags:;
- (void).cxx_destruct;
- (void)layoutSubviews;
+ (id)createTagsViewWithTags:;
@end
