@interface IESECProductRefreshMessage : GPBMessage
@property (nonatomic) q promotionId;
@property (nonatomic) q productId;
@property (nonatomic) q channelType;
@property (nonatomic) q channelId;
@property (nonatomic) q updateTs;
@property (nonatomic) NSInteger actionType;
@property (nonatomic) IESECProductRefreshMessage_RequestInfo requestInfo;
@property (nonatomic) BOOL hasRequestInfo;
@property (nonatomic) IESECProductRefreshMessage_ProductInfo productInfo;
@property (nonatomic) BOOL hasProductInfo;
+ (id)descriptor;
@end
