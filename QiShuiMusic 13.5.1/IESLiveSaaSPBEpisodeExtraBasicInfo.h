@interface IESLiveSaaSPBEpisodeExtraBasicInfo : GPBMessage
@property (nonatomic) q roomStartTime;
@property (nonatomic) BOOL geoBlock;
@property (nonatomic) IESLiveSaaSPBImage roomCover;
@property (nonatomic) BOOL hasRoomCover;
@property (nonatomic) NSString roomCoverColor;
@property (nonatomic) NSInteger visibility;
@property (nonatomic) NSMutableArray visibilityAvailableUsersArray;
@property (nonatomic) Q visibilityAvailableUsersArray_Count;
@property (nonatomic) NSMutableArray visibilityUnavailableUsersArray;
@property (nonatomic) Q visibilityUnavailableUsersArray_Count;
+ (id)descriptor;
@end
