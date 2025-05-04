@interface AWEPublishCoproduceSearchView : UIView
@property (nonatomic) <AWEPublishCoproduceSearchViewDelegate> delegate;
@property (nonatomic) AWEPublishCoproduceSearchBar searchBar;
- (id)searchBar;
- (id)delegate;
- (void)setSearchBar:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)reset;
- (void)setDelegate:;
- (void)layoutSubviews;
@end
