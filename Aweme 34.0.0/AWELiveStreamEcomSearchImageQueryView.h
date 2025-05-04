@interface AWELiveStreamEcomSearchImageQueryView : UIView
@property (nonatomic) UIImageView liveTopTag;
@property (nonatomic) UIImageView searchImageView;
@property (nonatomic) UILabel searchContent;
@property (nonatomic) UIImageView tailSearchIconTag;
@property (nonatomic) AWELiveStreamSearchEcomWordModel model;
@property (nonatomic) @? tapBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTapBlock:;
- (id)tapBlock;
- (void)configWithModel:;
- (id)searchImageView;
- (void)setSearchImageView:;
- (void)tapQueryItem;
- (id)searchContent;
- (id)liveTopTag;
- (void)setLiveTopTag:;
- (void)setSearchContent:;
- (id)tailSearchIconTag;
- (void)setTailSearchIconTag:;
- (void)setModel:;
- (id)initWithFrame:;
- (id)model;
- (void).cxx_destruct;
- (void)setupUI;
@end
