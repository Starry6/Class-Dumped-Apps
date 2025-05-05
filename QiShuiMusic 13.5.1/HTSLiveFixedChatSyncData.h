@interface HTSLiveFixedChatSyncData : IESLivePBBaseMessage
@property (nonatomic) NSString hint;
@property (nonatomic) HTSLiveFastChatInfo fastChatInfo;
@property (nonatomic) BOOL hasFastChatInfo;
@property (nonatomic) HTSLiveFixedChatInfo fixedChatInfo;
@property (nonatomic) BOOL hasFixedChatInfo;
+ (id)descriptor;
@end
