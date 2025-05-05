@interface HTSLiveStreamUrl_LiveCoreSDKData_PushData : IESLivePBBaseMessage
@property (nonatomic) NSMutableDictionary resolutionParams;
@property (nonatomic) Q resolutionParams_Count;
@property (nonatomic) NSInteger pushStreamLevel;
@property (nonatomic) BOOL preSchedule;
@property (nonatomic) NSString rtmpPushURL;
@property (nonatomic) NSString pushParams;
@property (nonatomic) NSInteger kind;
@property (nonatomic) q streamId;
@property (nonatomic) NSString streamIdStr;
+ (id)descriptor;
@end
