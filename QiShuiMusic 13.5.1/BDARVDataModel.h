@interface BDARVDataModel : BDARVActionModel
@property (nonatomic) NSString appleid;
@property (nonatomic) NSString downloadUrl;
@property (nonatomic) NSArray trackUrlList;
@property (nonatomic) NSArray clickTrackUrlList;
@property (nonatomic) BDARVButtonListModel buttonList;
@property (nonatomic) NSString webURL;
@property (nonatomic) NSString webTitle;
@property (nonatomic) NSString adLpStyle;
@property (nonatomic) NSNumber interceptFlag;
@property (nonatomic) NSString groupid;
@property (nonatomic) NSString itemid;
@property (nonatomic) NSArray filterWords;
@property (nonatomic) NSArray dislike;
@property (nonatomic) BDARVVideoModel video;
@property (nonatomic) NSString routeOpenUrl;
@property (nonatomic) NSString type;
@property (nonatomic) NSString mpURL;
@property (nonatomic) NSArray preloadResources;
@property (nonatomic) BDARVInspireInfo inspireAdInfo;
@property (nonatomic) NSString skanParameters;
@property (nonatomic) NSString sdkABTestParams;
@property (nonatomic) NSDictionary sdkABTestParamsDictionary;
@property (nonatomic) NSDictionary liveData;
@property (nonatomic) NSDictionary wcMinAppInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)appleid;
- (id)sdkABTestParams;
- (id)groupid;
- (void)setFilterWords:;
- (id)adLpStyle;
- (id)buttonList;
- (id)clickTrackUrlList;
- (id)filterWords;
- (id)inspireAdInfo;
- (id)interceptFlag;
- (id)itemid;
- (id)liveData;
- (id)mpURL;
- (id)routeOpenUrl;
- (id)sdkABTestParamsDictionary;
- (void)setAdLpStyle:;
- (void)setAppleid:;
- (void)setButtonList:;
- (void)setClickTrackUrlList:;
- (void)setDislike:;
- (void)setGroupid:;
- (void)setInspireAdInfo:;
- (void)setInterceptFlag:;
- (void)setItemid:;
- (void)setLiveData:;
- (void)setMpURL:;
- (void)setPreloadResources:;
- (void)setRouteOpenUrl:;
- (void)setSdkABTestParams:;
- (void)setSdkABTestParamsDictionary:;
- (void)setSkanParameters:;
- (void)setTrackUrlList:;
- (void)setWcMinAppInfo:;
- (void)setWebTitle:;
- (id)skanParameters;
- (id)trackUrlList;
- (id)wcMinAppInfo;
- (id)webTitle;
- (id)initWithDictionary:error:;
- (void)setType:;
- (id)type;
- (void).cxx_destruct;
- (void)setVideo:;
- (id)webURL;
- (id)video;
- (id)dislike;
- (void)setWebURL:;
- (id)downloadUrl;
- (void)setDownloadUrl:;
- (id)preloadResources;
@end
