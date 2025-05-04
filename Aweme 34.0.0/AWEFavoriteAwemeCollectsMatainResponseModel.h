@interface AWEFavoriteAwemeCollectsMatainResponseModel : AWEBaseApiModel
@property (nonatomic) AWEFavoriteFolderBaseInfoModel collectsInfoData;
@property (nonatomic) NSNumber favoriteStatusCode;
@property (nonatomic) NSString favoriteStatusMsg;
@property (nonatomic) NSString logid;
- (id)logid;
- (void)setLogid:;
- (id)favoriteStatusCode;
- (id)collectsInfoData;
- (void)setCollectsInfoData:;
- (id)favoriteStatusMsg;
- (void)setFavoriteStatusMsg:;
- (void)setFavoriteStatusCode:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
