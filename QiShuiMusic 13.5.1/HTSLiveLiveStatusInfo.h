@interface HTSLiveLiveStatusInfo : IESLivePBBaseMessage
@property (nonatomic) NSInteger liveStatus;
@property (nonatomic) HTSLiveUser liveUser;
@property (nonatomic) BOOL hasLiveUser;
@property (nonatomic) GPBInt32ObjectDictionary liveNotifyLight;
@property (nonatomic) Q liveNotifyLight_Count;
@property (nonatomic) NSString previewText;
+ (id)descriptor;
@end
