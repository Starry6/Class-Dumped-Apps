@interface IESLiveThemedCompetitionSetting : IESLivePBBaseMessage
@property (nonatomic) NSArray mixJudgesUserIdList;
@property (nonatomic) NSString theme;
@property (nonatomic) NSInteger themeType;
@property (nonatomic) NSInteger selectionType;
@property (nonatomic) q winCount;
@property (nonatomic) NSMutableArray judgesOpenIdListArray;
@property (nonatomic) Q judgesOpenIdListArray_Count;
@property (nonatomic) q maxJudgesCount;
@property (nonatomic) q maxWinCount;
@property (nonatomic) NSMutableArray serverThemeListArray;
@property (nonatomic) Q serverThemeListArray_Count;
@property (nonatomic) NSString customTheme;
@property (nonatomic) q maxScore;
@property (nonatomic) BOOL canEditScore;
@property (nonatomic) GPBInt64Array maxScoreCandidatesArray;
@property (nonatomic) Q maxScoreCandidatesArray_Count;
- (id)mixJudgesUserIdList;
+ (id)descriptor;
@end
