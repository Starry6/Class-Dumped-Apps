@interface AWELuckyCatCountDownTaskModel : AWELiteBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSString category;
@property (nonatomic) NSString iconUrl;
@property (nonatomic) NSInteger showMs;
@property (nonatomic) double countDownMs;
@property (nonatomic) BOOL isNew;
@property (nonatomic) NSInteger totalAmount;
@property (nonatomic) AWELuckyCatPendant pendant;
@property (nonatomic) NSString taskKey;
@property (nonatomic) NSNumber taskId;
- (id)iconUrl;
- (void)setIconUrl:;
- (id)taskKey;
- (id)pendant;
- (void)setPendant:;
- (void)setTaskKey:;
- (int)showMs;
- (void)setShowMs:;
- (double)countDownMs;
- (void)setCountDownMs:;
- (id)category;
- (BOOL)isNew;
- (void)setSubTitle:;
- (id)subTitle;
- (void)setCategory:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setIsNew:;
- (id)taskId;
- (void)setTaskId:;
- (void)setTotalAmount:;
- (int)totalAmount;
+ (id)JSONKeyPathsByPropertyKey;
@end
