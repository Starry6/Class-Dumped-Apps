@interface IESLiveSaaSPBDIYGiftToolbarInfo : GPBMessage
@property (nonatomic) NSMutableArray cardsArray;
@property (nonatomic) Q cardsArray_Count;
@property (nonatomic) IESLiveSaaSPBDIYPageEnterButton button;
@property (nonatomic) BOOL hasButton;
@property (nonatomic) IESLiveSaaSPBImage defaultGiftDescribeImg;
@property (nonatomic) BOOL hasDefaultGiftDescribeImg;
@property (nonatomic) NSMutableArray forceIndexCardsArray;
@property (nonatomic) Q forceIndexCardsArray_Count;
@property (nonatomic) NSInteger maxTotalCardNumber;
@property (nonatomic) NSInteger maxLocalCardNumber;
@property (nonatomic) q configId;
@property (nonatomic) NSString giftShowName;
+ (id)descriptor;
@end
