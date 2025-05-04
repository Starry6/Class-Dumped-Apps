@interface AWELiveLocalLifeLotteryModel : MTLModel
@property (nonatomic) NSString lotteryId;
@property (nonatomic) NSNumber startTime;
@property (nonatomic) NSNumber drawTime;
@property (nonatomic) NSString iconUrl;
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
- (void)setStartTime:;
- (void).cxx_destruct;
- (id)startTime;
+ (id)JSONKeyPathsByPropertyKey;
@end
