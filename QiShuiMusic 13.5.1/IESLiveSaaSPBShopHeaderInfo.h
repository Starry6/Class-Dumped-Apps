@interface IESLiveSaaSPBShopHeaderInfo : GPBMessage
@property (nonatomic) NSString shopName;
@property (nonatomic) IESLiveSaaSPBImage brandTag;
@property (nonatomic) BOOL hasBrandTag;
@property (nonatomic) NSMutableArray shopHeaderIconListArray;
@property (nonatomic) Q shopHeaderIconListArray_Count;
@property (nonatomic) IESLiveSaaSPBAuthorReputation shopReputation;
@property (nonatomic) BOOL hasShopReputation;
@property (nonatomic) NSString storeURL;
@property (nonatomic) NSInteger iconShowType;
+ (id)descriptor;
@end
