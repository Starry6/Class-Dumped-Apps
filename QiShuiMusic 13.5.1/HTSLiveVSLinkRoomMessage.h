@interface HTSLiveVSLinkRoomMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) HTSLiveVSLinkInfo linkInfo;
@property (nonatomic) BOOL hasLinkInfo;
@property (nonatomic) BOOL allInfo;
@property (nonatomic) q scatterTime;
+ (id)descriptor;
@end
