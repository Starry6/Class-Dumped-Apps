@interface IESLiveSaaSPBRankRankEnterInfo : GPBMessage
@property (nonatomic) NSMutableArray rankInfosArray;
@property (nonatomic) Q rankInfosArray_Count;
@property (nonatomic) BOOL hiddenEnter;
@property (nonatomic) IESLiveSaaSPBImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) NSMutableArray defaultPageArray;
@property (nonatomic) Q defaultPageArray_Count;
@property (nonatomic) q periodRemainingSecond;
@property (nonatomic) NSMutableArray rankInfosWithoutShopArray;
@property (nonatomic) Q rankInfosWithoutShopArray_Count;
@property (nonatomic) BOOL displayKtvRank;
@property (nonatomic) NSMutableArray defaultRankInfosArray;
@property (nonatomic) Q defaultRankInfosArray_Count;
@property (nonatomic) NSMutableArray customizedDefaultRankInfosArray;
@property (nonatomic) Q customizedDefaultRankInfosArray_Count;
+ (id)descriptor;
@end
