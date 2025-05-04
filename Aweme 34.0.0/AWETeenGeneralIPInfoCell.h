@interface AWETeenGeneralIPInfoCell : UICollectionViewCell
@property (nonatomic) AWETeenGeneralIPAlbumCardModel model;
@property (nonatomic) AWETeenLynxContainer ipAlbumLynxView;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtra:;
- (void)view:didLoadFailedWithUrl:error:;
- (void)view:didFinishLoadWithURL:;
- (void)configWithModel:extra:;
- (void)showLog;
- (id)ipAlbumLynxView;
- (void)updateGeneralSpecificAlbum:progress:;
- (void)p_trackAlbumShow;
- (void)setIpAlbumLynxView:;
- (void)setModel:;
- (void)dealloc;
- (id)extra;
- (id)initWithFrame:;
- (id)model;
- (void).cxx_destruct;
+ (id)cellSizeWithModel:;
@end
