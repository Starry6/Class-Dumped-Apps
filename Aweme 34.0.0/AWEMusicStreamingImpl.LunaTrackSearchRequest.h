@interface AWEMusicStreamingImpl.LunaTrackSearchRequest : AWEMusicStreamingImpl.LunaRequestBaseModel
@property (nonatomic) NSString query;
@property (nonatomic) q cursor;
@property (nonatomic) NSString searchID;
@property (nonatomic) NSString searchMethod;
@property (nonatomic) NSString searchScene;
- (id)searchMethod;
- (void)setSearchMethod:;
- (id)searchScene;
- (void)setSearchScene:;
- (Class)responseModelClass;
- (long long)cursor;
- (id)init;
- (void)setQuery:;
- (id)query;
- (id)path;
- (void)setCursor:;
- (void).cxx_destruct;
- (id)params;
- (id)searchID;
- (void)setSearchID:;
@end
