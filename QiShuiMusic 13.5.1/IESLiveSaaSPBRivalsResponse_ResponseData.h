@interface IESLiveSaaSPBRivalsResponse_ResponseData : GPBMessage
@property (nonatomic) NSMutableArray followedListArray;
@property (nonatomic) Q followedListArray_Count;
@property (nonatomic) NSMutableArray recentListArray;
@property (nonatomic) Q recentListArray_Count;
@property (nonatomic) NSMutableArray recommendListArray;
@property (nonatomic) Q recommendListArray_Count;
@property (nonatomic) GPBInt64ObjectDictionary rivalExtraInfos;
@property (nonatomic) Q rivalExtraInfos_Count;
@property (nonatomic) NSString tips;
@property (nonatomic) NSInteger skinType;
@property (nonatomic) IESLiveSaaSPBRivalsResponse_RivalGroupData activityData;
@property (nonatomic) BOOL hasActivityData;
@property (nonatomic) IESLiveSaaSPBRivalsResponse_PanelBanner panelBanner;
@property (nonatomic) BOOL hasPanelBanner;
@property (nonatomic) q tabLocate;
@property (nonatomic) BOOL pkAvailable;
+ (id)descriptor;
@end
