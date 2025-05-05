@interface IESECAuctionInfo : GPBMessage
@property (nonatomic) q price;
@property (nonatomic) NSString priceLabel;
@property (nonatomic) NSInteger status;
@property (nonatomic) NSString jumpURL;
@property (nonatomic) IESECCurrentUserInfo currentUserInfo;
@property (nonatomic) BOOL hasCurrentUserInfo;
@property (nonatomic) NSMutableArray incrPriceListsArray;
@property (nonatomic) Q incrPriceListsArray_Count;
@property (nonatomic) NSString buttonLabel;
@property (nonatomic) q productId;
@property (nonatomic) q endTime;
@property (nonatomic) NSInteger bizId;
+ (id)descriptor;
@end
