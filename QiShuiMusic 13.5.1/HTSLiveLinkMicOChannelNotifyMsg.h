@interface HTSLiveLinkMicOChannelNotifyMsg : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSInteger type;
@property (nonatomic) NSString toastMsg;
+ (id)descriptor;
@end
