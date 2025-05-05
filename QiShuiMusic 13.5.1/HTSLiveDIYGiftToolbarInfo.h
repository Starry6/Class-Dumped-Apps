@interface HTSLiveDIYGiftToolbarInfo : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray cardsArray;
@property (nonatomic) Q cardsArray_Count;
@property (nonatomic) HTSLiveDIYPageEnterButton button;
@property (nonatomic) BOOL hasButton;
@property (nonatomic) HTSLiveImage defaultGiftDescribeImg;
@property (nonatomic) BOOL hasDefaultGiftDescribeImg;
@property (nonatomic) NSMutableArray forceIndexCardsArray;
@property (nonatomic) Q forceIndexCardsArray_Count;
@property (nonatomic) NSInteger maxTotalCardNumber;
@property (nonatomic) NSInteger maxLocalCardNumber;
@property (nonatomic) q configId;
@property (nonatomic) NSString giftShowName;
+ (id)descriptor;
@end
