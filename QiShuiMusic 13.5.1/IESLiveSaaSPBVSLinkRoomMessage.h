@interface IESLiveSaaSPBVSLinkRoomMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) IESLiveSaaSPBVSLinkInfo linkInfo;
@property (nonatomic) BOOL hasLinkInfo;
@property (nonatomic) BOOL allInfo;
@property (nonatomic) q scatterTime;
+ (id)descriptor;
@end
