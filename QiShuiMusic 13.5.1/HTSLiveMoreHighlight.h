@interface HTSLiveMoreHighlight : IESLivePBBaseMessage
@property (nonatomic) NSString title;
@property (nonatomic) NSString desc;
@property (nonatomic) NSMutableArray episodesArray;
@property (nonatomic) Q episodesArray_Count;
@property (nonatomic) NSMutableArray backgroundColorsArray;
@property (nonatomic) Q backgroundColorsArray_Count;
@property (nonatomic) HTSLiveMoreSeason moreSeasons;
@property (nonatomic) BOOL hasMoreSeasons;
@property (nonatomic) q total;
@property (nonatomic) q extensionType;
@property (nonatomic) NSMutableArray moreEntryListArray;
@property (nonatomic) Q moreEntryListArray_Count;
@property (nonatomic) q normalEpisodeCount;
+ (id)descriptor;
@end
