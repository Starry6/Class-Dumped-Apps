@interface PaidLiveItemInfo : IESLivePBBaseMessage
@property (nonatomic) q itemId;
@property (nonatomic) NSInteger itemType;
+ (id)descriptor;
@end
