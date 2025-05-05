@interface HTSLiveGiftMarketingBtn : IESLivePBBaseMessage
@property (nonatomic) NSInteger buttonType;
@property (nonatomic) NSInteger sendGiftCount;
@property (nonatomic) NSString textBeforeMission;
@property (nonatomic) NSString textAfterMission;
+ (id)descriptor;
@end
