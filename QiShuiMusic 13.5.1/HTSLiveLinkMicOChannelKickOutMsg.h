@interface HTSLiveLinkMicOChannelKickOutMsg : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSString kickOutUid;
@property (nonatomic) NSString toastMsg;
+ (id)descriptor;
@end
