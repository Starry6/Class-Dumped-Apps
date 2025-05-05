@interface HTSLiveRoomAppConfigMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) HTSLiveAnchorFaceConfig anchorFaceConfig;
@property (nonatomic) BOOL hasAnchorFaceConfig;
+ (id)descriptor;
@end
