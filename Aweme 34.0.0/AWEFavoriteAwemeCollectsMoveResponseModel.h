@interface AWEFavoriteAwemeCollectsMoveResponseModel : AWEBaseApiModel
@property (nonatomic) NSNumber favoriteStatusCode;
@property (nonatomic) NSString favoriteStatusMsg;
@property (nonatomic) NSString logid;
@property (nonatomic) NSArray existedItemIds;
- (id)logid;
- (void)setLogid:;
- (id)favoriteStatusCode;
- (id)existedItemIds;
- (id)favoriteStatusMsg;
- (void)setFavoriteStatusMsg:;
- (void)setFavoriteStatusCode:;
- (void)setExistedItemIds:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
