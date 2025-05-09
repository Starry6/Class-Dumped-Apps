@interface AWEStudioRepoLiveModel : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString imageTextConfig;
@property (nonatomic) double targetTime;
@property (nonatomic) NSString taskId;
@property (nonatomic) NSString liveUserName;
@property (nonatomic) NSString liveSimpleUserName;
@property (nonatomic) NSString liveRoomId;
@property (nonatomic) NSString liveRoomTime;
@property (nonatomic) NSString liveCoverUrl;
@property (nonatomic) NSString liveAnchorId;
@property (nonatomic) NSString liveAnchorDisplayId;
@property (nonatomic) NSString liveFragmentId;
@property (nonatomic) NSNumber liveRecordStartTime;
@property (nonatomic) NSNumber liveRecordEndTime;
@property (nonatomic) NSDictionary liveEcommerceTrackDict;
@property (nonatomic) NSString promotionID;
@property (nonatomic) NSValue liveWatermarkFrameValue;
@property (nonatomic) double liveVideoDuration;
@property (nonatomic) NSString videoId;
@property (nonatomic) Q pushToType;
@property (nonatomic) BOOL isAdminPushToAnchor;
@property (nonatomic) NSString pushToTypeText;
@property (nonatomic) NSString imageTextConfig;
@property (nonatomic) double targetTime;
- (id)promotionID;
- (void)setPromotionID:;
- (id)liveRoomId;
- (void)setLiveRoomId:;
- (id)liveUserName;
- (void)setLiveUserName:;
- (id)acc_publishRequestParams:;
- (id)initWithDraft:;
- (void)saveWithDraft:;
- (BOOL)isAdminPushToAnchor;
- (void)setLiveSimpleUserName:;
- (void)setLiveAnchorId:;
- (void)setLiveAnchorDisplayId:;
- (void)setLiveRoomTime:;
- (void)setLiveRecordStartTime:;
- (void)setLiveRecordEndTime:;
- (void)setPushToType:;
- (void)setLiveWatermarkFrameValue:;
- (void)setLiveCoverUrl:;
- (void)setLiveFragmentId:;
- (void)setLiveVideoDuration:;
- (void)setLiveEcommerceTrackDict:;
- (void)willEnterEditPageFromClipPage:originalPublishModel:;
- (id)liveImageTextStickerConfig;
- (double)configTargetTime;
- (id)imageTextConfig;
- (void)setImageTextConfig:;
- (double)liveVideoDuration;
- (id)liveAnchorId;
- (id)liveCoverUrl;
- (unsigned long long)pushToType;
- (id)pushToTypeText;
- (id)acc_publishTrackEventParams:;
- (id)liveAnchorDisplayId;
- (id)liveFragmentId;
- (id)liveRecordStartTime;
- (id)liveRecordEndTime;
- (id)liveRoomTime;
- (id)liveEcommerceTrackDict;
- (id)liveSimpleUserName;
- (id)liveWatermarkFrameValue;
- (void)setVideoId:;
- (void).cxx_destruct;
- (double)targetTime;
- (id)videoId;
- (void)setTargetTime:;
- (id)taskId;
- (id)copyWithZone:;
- (void)setTaskId:;
- (id)trackInfo;
+ (id)repo_dataProtocol;
@end
