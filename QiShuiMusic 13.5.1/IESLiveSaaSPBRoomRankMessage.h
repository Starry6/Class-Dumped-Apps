@interface IESLiveSaaSPBRoomRankMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSMutableArray ranksArray;
@property (nonatomic) Q ranksArray_Count;
+ (id)descriptor;
@end
