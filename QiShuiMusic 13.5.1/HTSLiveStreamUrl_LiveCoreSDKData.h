@interface HTSLiveStreamUrl_LiveCoreSDKData : IESLivePBBaseMessage
@property (nonatomic) HTSLiveStreamUrl_LiveCoreSDKData_PullData pullData;
@property (nonatomic) BOOL hasPullData;
@property (nonatomic) HTSLiveStreamUrl_LiveCoreSDKData_PushData pushData;
@property (nonatomic) BOOL hasPushData;
@property (nonatomic) NSString size;
+ (id)descriptor;
@end
