@interface IESLiveSaaSLiveRoomURLModel : BDDynamicMTLModel
@property (nonatomic) NSNumber urlID;
@property (nonatomic) NSString rtmpPushURL;
@property (nonatomic) NSArray rtmpPushURLs;
@property (nonatomic) NSString rtmpPullURL;
@property (nonatomic) NSDictionary flvPullURL;
@property (nonatomic) NSDictionary resolutionName;
@property (nonatomic) NSArray candidateResolution;
@property (nonatomic) NSString defaultResolution;
@property (nonatomic) NSNumber provider;
@property (nonatomic) NSString rtmpPushSdkParams;
@property (nonatomic) NSString rtmpPullSdkParams;
@property (nonatomic) NSDictionary flvPullSdkParams;
@property (nonatomic) NSDictionary pullDatas;
@property (nonatomic) IESLiveSaaSStreamUrlPlaySetting play;
@property (nonatomic) IESLiveSaaSLiveRoomURLExtraModel extra;
@property (nonatomic) IESLiveSaaSLiveRoomCoreSDKData coreSDKData;
@property (nonatomic) NSNumber streamControlType;
@property (nonatomic) NSNumber streamOrientation;
@property (nonatomic) IESLiveEncryptRoomURLModel encryptRoomURL;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCoreSDKData:;
- (void)setRtmpPullURL:;
- (id)candidateResolution;
- (id)coreSDKData;
- (void)decryptStreamURLToAssign;
- (id)defaultResolution;
- (id)encryptRoomURL;
- (id)flvPullSdkParams;
- (id)flvPullURL;
- (id)pullDatas;
- (void)resetAssignStreamURL;
- (id)resolutionName;
- (id)rtmpPullSdkParams;
- (id)rtmpPullURL;
- (id)rtmpPushURL;
- (id)rtmpPushURLs;
- (void)setEncryptRoomURL:;
- (void)setRtmpPullSdkParams:;
- (void)setStreamOrientation:;
- (id)streamControlType;
- (id)streamOrientation;
- (id)urlID;
- (id)extra;
- (id)play;
- (id)provider;
- (void).cxx_destruct;
- (void)mergeValueForKey:fromModel:;
+ (id)coreSDKDataJSONTransformer;
+ (id)extraJSONTransformer;
+ (id)playJSONTransformer;
+ (id)pullDatasJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
