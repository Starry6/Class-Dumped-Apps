@interface AWELifeShelfCardListItemCardDataLotteryInfo : MTLModel
@property (nonatomic) NSString lotteryId;
@property (nonatomic) NSNumber startTime;
@property (nonatomic) NSNumber drawTime;
@property (nonatomic) NSString iconUrl;
@property (nonatomic) Q candidateStatus;
@property (nonatomic) NSString taskPageSchema;
@property (nonatomic) NSString predictPrice;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)iconUrl;
- (void)setIconUrl:;
- (id)lotteryId;
- (void)setLotteryId:;
- (id)drawTime;
- (void)setDrawTime:;
- (unsigned long long)candidateStatus;
- (void)setCandidateStatus:;
- (id)taskPageSchema;
- (void)setTaskPageSchema:;
- (id)predictPrice;
- (void)setPredictPrice:;
- (void)setStartTime:;
- (void).cxx_destruct;
- (id)startTime;
+ (id)JSONKeyPathsByPropertyKey;
@end
