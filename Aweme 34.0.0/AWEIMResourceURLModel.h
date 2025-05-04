@interface AWEIMResourceURLModel : NSObject
@property (nonatomic) Q resourcesType;
@property (nonatomic) Q formatType;
@property (nonatomic) AWEURLModel innerModel;
@property (nonatomic) Q type;
@property (nonatomic) BOOL needRecoverUrl;
- (id)initWithAWEURLModel:;
- (id)initWithAWEURLModel:type:;
- (BOOL)needRecoverUrl;
- (BOOL)needRefreshExpiredUrl;
- (void)autoRefreshURLModel:;
- (unsigned long long)resourcesType;
- (BOOL)p_couldRefreshViaURI;
- (void)refreshURLModelWithUri:;
- (void)refreshURLModelWithUrl:;
- (void)p_trackReloadEntrance;
- (void)p_refreshURLModelWithUrlInPosition:completion:;
- (void)p_refreshURLModelWithKey:isUrl:completion:;
- (id)p_fetchedBlockWithCompletion:;
- (void)p_trackReloadNetworkResultStatus:ext:;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (unsigned long long)formatType;
- (id)innerModel;
- (void)setInnerModel:;
@end
