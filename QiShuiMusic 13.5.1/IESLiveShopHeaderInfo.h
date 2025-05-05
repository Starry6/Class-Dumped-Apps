@interface IESLiveShopHeaderInfo : IESLivePBBaseMessage
@property (nonatomic) NSString shopName;
@property (nonatomic) HTSLiveImage brandTag;
@property (nonatomic) BOOL hasBrandTag;
@property (nonatomic) NSMutableArray shopHeaderIconListArray;
@property (nonatomic) Q shopHeaderIconListArray_Count;
@property (nonatomic) IESLiveAuthorReputation shopReputation;
@property (nonatomic) BOOL hasShopReputation;
@property (nonatomic) NSString storeURL;
@property (nonatomic) NSInteger iconShowType;
@property (nonatomic) IESLiveHeartDiamondInfo heartDiamondInfo;
@property (nonatomic) BOOL hasHeartDiamondInfo;
@property (nonatomic) IESLiveText jumpGuideInfo;
@property (nonatomic) BOOL hasJumpGuideInfo;
+ (id)descriptor;
@end
