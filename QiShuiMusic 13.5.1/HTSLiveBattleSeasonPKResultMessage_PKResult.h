@interface HTSLiveBattleSeasonPKResultMessage_PKResult : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage resultImg;
@property (nonatomic) BOOL hasResultImg;
@property (nonatomic) HTSLiveImage bgImg;
@property (nonatomic) BOOL hasBgImg;
@property (nonatomic) NSString resultStr;
@property (nonatomic) NSMutableArray descriptionsArray;
@property (nonatomic) Q descriptionsArray_Count;
+ (id)descriptor;
@end
