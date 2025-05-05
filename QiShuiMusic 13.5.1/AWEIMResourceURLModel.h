@interface AWEIMResourceURLModel : NSObject
@property (nonatomic) Q resourcesType;
@property (nonatomic) Q formatType;
@property (nonatomic) IESIMURLModel innerModel;
@property (nonatomic) Q type;
@property (nonatomic) BOOL needRecoverUrl;
- (void)autoRefreshURLModel:;
- (id)initWithAWEURLModel:;
- (id)initWithAWEURLModel:type:;
- (BOOL)needRecoverUrl;
- (BOOL)p_couldRefreshViaURI;
- (id)p_fetchedBlockWithCompletion:;
- (void)p_refreshURLModelWithKey:isUrl:completion:;
- (void)p_refreshURLModelWithUrlInPosition:completion:;
- (void)p_trackReloadEntrance;
- (void)p_trackReloadNetworkResultStatus:ext:;
- (void)refreshURLModelWithUri:;
- (void)refreshURLModelWithUrl:;
- (unsigned long long)resourcesType;
- (void)setType:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (unsigned long long)formatType;
- (id)innerModel;
- (void)setInnerModel:;
@end
