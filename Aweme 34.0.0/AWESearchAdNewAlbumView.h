@interface AWESearchAdNewAlbumView : UIView
@property (nonatomic) AWESearchAdImagesSliderView albumSliderView;
@property (nonatomic) AWESearchAdAlbumGridView albumGridView;
@property (nonatomic) @? albumTappedWithIndex;
@property (nonatomic) @? albumSliderCheckMore;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateWithAwemeModel:;
- (id)albumTappedWithIndex;
- (void)setAlbumTappedWithIndex:;
- (id)albumSliderCheckMore;
- (void)setAlbumSliderCheckMore:;
- (id)albumSliderView;
- (id)albumGridView;
- (void)setAlbumSliderView:;
- (void)setAlbumGridView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
@end
