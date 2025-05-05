@interface IESLiveSaaSPBRankRankEnterInfo_RankInfo : GPBMessage
@property (nonatomic) NSMutableArray pagesArray;
@property (nonatomic) Q pagesArray_Count;
@property (nonatomic) IESLiveSaaSPBImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) NSInteger position;
@property (nonatomic) NSInteger rankType;
@property (nonatomic) NSString title;
@property (nonatomic) NSString rankExtra;
@property (nonatomic) NSString entranceExtra;
+ (id)descriptor;
@end
