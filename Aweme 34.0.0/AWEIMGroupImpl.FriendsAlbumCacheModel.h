@interface AWEIMGroupImpl.FriendsAlbumCacheModel : AWEBaseDataModel
@property (nonatomic) NSString identifier;
@property (nonatomic) NSNumber hasDeleted;
@property (nonatomic) AWEIMCodeGenFriendsAlbumMediaInfoModel assetModel;
- (id)assetModel;
- (void)setAssetModel:;
- (id)init;
- (void)setIdentifier:;
- (id)identifier;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (id)hasDeleted;
- (void)setHasDeleted:;
+ (id)JSONKeyPathsByPropertyKey;
@end
