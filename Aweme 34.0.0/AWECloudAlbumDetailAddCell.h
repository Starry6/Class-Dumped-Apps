@interface AWECloudAlbumDetailAddCell : UICollectionViewCell
@property (nonatomic) <AWECloudAlbumDetailListCellModelProtocol> cellModel;
@property (nonatomic) <AWECloudAlbumDetailCellDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCellModel:;
- (void)refresh;
- (id)delegate;
- (id)initWithFrame:;
- (void)setup;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)addAction;
- (id)cellModel;
@end
