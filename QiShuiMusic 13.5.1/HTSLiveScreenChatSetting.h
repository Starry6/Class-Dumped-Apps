@interface HTSLiveScreenChatSetting : IESLivePBBaseMessage
@property (nonatomic) BOOL allow;
@property (nonatomic) q followType;
@property (nonatomic) q fansclubType;
@property (nonatomic) q activeType;
+ (id)descriptor;
@end
