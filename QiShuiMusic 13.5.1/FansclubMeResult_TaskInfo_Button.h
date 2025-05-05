@interface FansclubMeResult_TaskInfo_Button : IESLivePBBaseMessage
@property (nonatomic) NSInteger buttonType;
@property (nonatomic) NSString content;
@property (nonatomic) q giftId;
@property (nonatomic) q giftCoinCount;
+ (id)descriptor;
@end
