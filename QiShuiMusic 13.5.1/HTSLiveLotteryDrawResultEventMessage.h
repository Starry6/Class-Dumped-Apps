@interface HTSLiveLotteryDrawResultEventMessage : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray mixUserIdsArray;
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q lotteryId;
@property (nonatomic) NSMutableArray userOpenidsArray;
@property (nonatomic) Q userOpenidsArray_Count;
@property (nonatomic) NSString extra;
- (id)mixUserIdsArray;
- (void)setMixUserIdsArray:;
+ (id)descriptor;
@end
