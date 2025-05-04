@interface AWEFavoriteAndFavoriteFolderCombineResponseModel : AWEBaseApiModel
@property (nonatomic) BOOL isCollectSuccess;
@property (nonatomic) AWEFavoriteFolderBaseInfoModel folderInfo;
- (BOOL)isCollectSuccess;
- (void)setIsCollectSuccess:;
- (id)folderInfo;
- (void)setFolderInfo:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
