@interface HTSLiveRealTimePlayBackMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) BOOL realtimePlaybackEnabled;
@property (nonatomic) NSString reason;
@property (nonatomic) NSString messageText;
+ (id)descriptor;
@end
