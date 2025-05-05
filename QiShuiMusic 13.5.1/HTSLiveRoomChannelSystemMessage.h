@interface HTSLiveRoomChannelSystemMessage : IESLivePBBaseMessage
@property (nonatomic) BOOL isCreateMessage;
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
- (BOOL)isCreateMessage;
- (void)setIsCreateMessage:;
+ (id)descriptor;
@end
