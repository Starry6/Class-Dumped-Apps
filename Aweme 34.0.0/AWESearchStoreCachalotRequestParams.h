@interface AWESearchStoreCachalotRequestParams : AWESearchResultCachalotRequestParams
@property (nonatomic) NSDictionary addressDictionary;
@property (nonatomic) NSString ecomSceneID;
@property (nonatomic) NSString searchChannel;
@property (nonatomic) NSString ecomTheme;
@property (nonatomic) NSDictionary sortParams;
- (id)ecomSceneID;
- (void)setEcomSceneID:;
- (id)searchChannel;
- (void)setSearchChannel:;
- (void)setAddressDictionary:;
- (id)refreshParams;
- (id)generateParams;
- (void)setSortParams:;
- (void)setEcomTheme:;
- (id)sortParams;
- (id)ecomTheme;
- (id)addressDictionary;
- (void).cxx_destruct;
@end
