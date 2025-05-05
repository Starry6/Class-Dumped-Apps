@interface HTSLiveMatchRoomInfo : IESLivePBBaseMessage
@property (nonatomic) HTSLiveMatchTabFrame matchTabFrame;
@property (nonatomic) BOOL hasMatchTabFrame;
@property (nonatomic) HTSLiveMatchTitle matchTitle;
@property (nonatomic) BOOL hasMatchTitle;
@property (nonatomic) HTSLiveToutiaoMatchData matchData;
@property (nonatomic) BOOL hasMatchData;
@property (nonatomic) NSString matchHashTag;
@property (nonatomic) NSMutableArray backgroundImageURLListArray;
@property (nonatomic) Q backgroundImageURLListArray_Count;
@property (nonatomic) HTSLiveImage shareIcon;
@property (nonatomic) BOOL hasShareIcon;
@property (nonatomic) HTSLiveMatchRoomImInfo imInfo;
@property (nonatomic) BOOL hasImInfo;
@property (nonatomic) HTSLiveMatchShareBackground matchShareBackground;
@property (nonatomic) BOOL hasMatchShareBackground;
@property (nonatomic) NSString themeId;
@property (nonatomic) HTSLiveMatchShareBackground matchLiveShareBackground;
@property (nonatomic) BOOL hasMatchLiveShareBackground;
@property (nonatomic) GPBInt64Int64Dictionary matchHostChannel;
@property (nonatomic) Q matchHostChannel_Count;
@property (nonatomic) q matchId;
+ (id)descriptor;
@end
