@interface AWEOneDayFeedCollectionViewCell : UICollectionViewCell
@property (nonatomic) AWEOrangeStoryCellMediaWrapper player;
@property (nonatomic) AWEOneDayStoryWithCommentModel model;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configWithModel:;
- (void)setModel:;
- (BOOL)isPlaying;
- (void)play;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (id)player;
- (id)model;
- (void)setPlayer:;
- (void).cxx_destruct;
- (void)stop;
- (void)pause;
- (void)setupUI;
@end
