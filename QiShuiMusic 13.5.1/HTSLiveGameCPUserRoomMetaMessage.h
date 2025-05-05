@interface HTSLiveGameCPUserRoomMetaMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q oper;
@property (nonatomic) HTSLiveUserIntroduceCardStatus userIntroduceCardStatus;
@property (nonatomic) BOOL hasUserIntroduceCardStatus;
@property (nonatomic) NSMutableArray userGiftStatusArray;
@property (nonatomic) Q userGiftStatusArray_Count;
+ (id)descriptor;
@end
