@interface HTSLiveSeason : IESLivePBBaseMessage
@property (nonatomic) NSString id_p;
@property (nonatomic) NSString title;
@property (nonatomic) NSString desc;
@property (nonatomic) q ownerId;
@property (nonatomic) HTSLiveImage cover;
@property (nonatomic) BOOL hasCover;
@property (nonatomic) HTSLiveImage coverVertical;
@property (nonatomic) BOOL hasCoverVertical;
@property (nonatomic) NSInteger status;
@property (nonatomic) NSMutableArray episodesArray;
@property (nonatomic) Q episodesArray_Count;
@property (nonatomic) NSMutableArray specialEpisodesArray;
@property (nonatomic) Q specialEpisodesArray_Count;
@property (nonatomic) HTSLiveStatistics statistics;
@property (nonatomic) BOOL hasStatistics;
@property (nonatomic) HTSLiveUser owner;
@property (nonatomic) BOOL hasOwner;
@property (nonatomic) HTSLiveSeasonBriefInfo briefInfo;
@property (nonatomic) BOOL hasBriefInfo;
@property (nonatomic) NSMutableArray albumItemsArray;
@property (nonatomic) Q albumItemsArray_Count;
@property (nonatomic) NSString actorIntroTitle;
@property (nonatomic) HTSLiveUserStatistics userStatistics;
@property (nonatomic) BOOL hasUserStatistics;
+ (id)descriptor;
@end
