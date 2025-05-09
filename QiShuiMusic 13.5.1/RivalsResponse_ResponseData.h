@interface RivalsResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray followedListArray;
@property (nonatomic) Q followedListArray_Count;
@property (nonatomic) NSMutableArray recentListArray;
@property (nonatomic) Q recentListArray_Count;
@property (nonatomic) NSMutableArray recommendListArray;
@property (nonatomic) Q recommendListArray_Count;
@property (nonatomic) GPBInt64ObjectDictionary rivalExtraInfos;
@property (nonatomic) Q rivalExtraInfos_Count;
@property (nonatomic) AutoMatchBanner autoMatchBanner;
@property (nonatomic) BOOL hasAutoMatchBanner;
@property (nonatomic) NSString tips;
@property (nonatomic) SearchBar searchBar;
@property (nonatomic) BOOL hasSearchBar;
@property (nonatomic) TipBar tipBar;
@property (nonatomic) BOOL hasTipBar;
@property (nonatomic) NSInteger skinType;
@property (nonatomic) GPBInt64ObjectDictionary room2Tags;
@property (nonatomic) Q room2Tags_Count;
@property (nonatomic) RivalsResponse_RivalGroupData activityData;
@property (nonatomic) BOOL hasActivityData;
@property (nonatomic) RivalsResponse_PanelBanner panelBanner;
@property (nonatomic) BOOL hasPanelBanner;
@property (nonatomic) RivalsResponse_ActivityTimeConfig activityTimeConfig;
@property (nonatomic) BOOL hasActivityTimeConfig;
@property (nonatomic) RivalsResponse_TopTips topTips;
@property (nonatomic) BOOL hasTopTips;
@property (nonatomic) q tabLocate;
@property (nonatomic) BOOL pkAvailable;
@property (nonatomic) GPBInt64ObjectDictionary tags;
@property (nonatomic) Q tags_Count;
@property (nonatomic) q durationTime;
@property (nonatomic) BattleSkinConfig skinConfig;
@property (nonatomic) BOOL hasSkinConfig;
@property (nonatomic) NSString followedlistGroupName;
+ (id)descriptor;
@end
