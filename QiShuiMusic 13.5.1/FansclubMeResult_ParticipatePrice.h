@interface FansclubMeResult_ParticipatePrice : IESLivePBBaseMessage
@property (nonatomic) q originalPrice;
@property (nonatomic) BOOL discount;
@property (nonatomic) q discountPrice;
@property (nonatomic) NSString discountStartTime;
@property (nonatomic) NSString discountEndTime;
@property (nonatomic) NSString discountText;
@property (nonatomic) NSString participateText;
+ (id)descriptor;
@end
