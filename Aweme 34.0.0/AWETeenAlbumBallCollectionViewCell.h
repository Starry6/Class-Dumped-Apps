@interface AWETeenAlbumBallCollectionViewCell : UICollectionViewCell
@property (nonatomic) AWETeenLynxContainer lynxContainer;
@property (nonatomic) AWETeenAlbumResourceGroupCellModel model;
@property (nonatomic) AWETeenDiscoverChannelContext context;
@property (nonatomic) double lastWidth;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configWithModel:context:;
- (id)lynxContainer;
- (void)view:didLoadFailedWithUrl:error:;
- (void)view:didFinishLoadWithURL:;
- (void)setLynxContainer:;
- (void)p_rotated:;
- (void)cellShowLog;
- (void)setModel:;
- (void)dealloc;
- (id)initWithFrame:;
- (id)model;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (double)lastWidth;
- (void)setLastWidth:;
+ (id)cellSizeWithModel:constraintWidth:;
@end
