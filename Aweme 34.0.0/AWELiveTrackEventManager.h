@interface AWELiveTrackEventManager : NSObject
@property (nonatomic) IESLiveRoomMQEventReportApi reportApi;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)trackLiveShowWithRoom:coreParams:extraParams:;
- (void)trackLiveShowWithEnterFromMerge:enterMethod:extraParams:;
- (void)trackLiveShowWithRoomModel:enterFromMerge:enterMethod:requestId:extraParams:;
- (void)trackLiveShowWithRoomData:enterFromMerge:enterMethod:requestId:extraParams:;
- (void)trackLiveDuration:enterFromMerge:enterMethod:requestId:duration:extraParams:;
- (void)trackLiveDurationWithRoomData:enterFromMerge:enterMethod:requestId:duration:extraParams:;
- (id)reportApi;
- (void)setReportApi:;
- (void)_trackLiveShowWithRoomDict:enterFromMerge:enterMethod:requestId:extraParams:;
- (void)_async:;
- (id)_parmasWithAdSkyLightLive:;
- (void)_trackLiveDurationWithRoomDict:enterFromMerge:enterMethod:requestId:duration:extraParams:;
- (void)trackLiveShowWithRoomDict:enterFromMerge:enterMethod:requestId:extraParams:;
- (void)trackLiveDurationWithRoomDict:enterFromMerge:enterMethod:requestId:duration:extraParams:;
- (void)trackLiveDurationWithEnterFromMerge:enterMethod:duration:extraParams:;
- (void).cxx_destruct;
+ (id)sharedLiveTracker;
@end
