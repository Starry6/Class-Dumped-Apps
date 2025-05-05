@interface IESLiveSaaSPBSeasonBriefInfo : GPBMessage
@property (nonatomic) NSInteger seasonType;
@property (nonatomic) NSInteger updatingStatus;
@property (nonatomic) q episodeCount;
@property (nonatomic) NSString releaseTime;
@property (nonatomic) NSString runningTime;
@property (nonatomic) NSString directors;
@property (nonatomic) NSString actors;
@property (nonatomic) NSString previewTText;
@property (nonatomic) IESLiveSaaSPBImage background;
@property (nonatomic) BOOL hasBackground;
@property (nonatomic) NSMutableArray usersArray;
@property (nonatomic) Q usersArray_Count;
@property (nonatomic) NSString introduce;
@property (nonatomic) q multiSeasonOrder;
@property (nonatomic) NSString multiSeasonTag;
+ (id)descriptor;
@end
