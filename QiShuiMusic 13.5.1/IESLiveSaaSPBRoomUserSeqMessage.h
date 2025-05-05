@interface IESLiveSaaSPBRoomUserSeqMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSMutableArray ranksArray;
@property (nonatomic) Q ranksArray_Count;
@property (nonatomic) q total;
@property (nonatomic) NSString popStr;
@property (nonatomic) NSMutableArray seatsArray;
@property (nonatomic) Q seatsArray_Count;
@property (nonatomic) q popularity;
@property (nonatomic) q totalUser;
@property (nonatomic) NSString totalUserStr;
@property (nonatomic) NSString totalStr;
@property (nonatomic) NSString onlineUserForAnchor;
@property (nonatomic) NSString totalPvForAnchor;
@property (nonatomic) NSString upRightStatsStr;
@property (nonatomic) NSString upRightStatsStrComplete;
+ (id)descriptor;
@end
