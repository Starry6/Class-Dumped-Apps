@interface HTSLivePaidLiveBaseInfo : IESLivePBBaseMessage
@property (nonatomic) NSInteger paidLiveType;
@property (nonatomic) q ticketSessionId;
@property (nonatomic) q ticketPrice;
@property (nonatomic) NSInteger viewRight;
@property (nonatomic) NSInteger delivery;
+ (id)descriptor;
@end
