@interface IESLiveSaaSPBCommentaryChangeMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) IESLiveSaaSPBCommentaryRoomInfo commentaryRoomInfo;
@property (nonatomic) BOOL hasCommentaryRoomInfo;
@property (nonatomic) NSInteger operation;
+ (id)descriptor;
@end
