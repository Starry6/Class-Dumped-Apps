@interface IESECCommonGirdleCountDownModel : MTLModel
@property (nonatomic) double initTimeinterval;
@property (nonatomic) double serverTime;
@property (nonatomic) double endTime;
@property (nonatomic) NSString prefix;
@property (nonatomic) NSString suffix;
@property (nonatomic) double currentTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)initTimeinterval;
- (void)setInitTimeinterval:;
- (void)setServerTime:;
- (id)init;
- (id)suffix;
- (void)setEndTime:;
- (double)endTime;
- (void)setPrefix:;
- (id)prefix;
- (void).cxx_destruct;
- (void)setSuffix:;
- (double)currentTime;
- (double)serverTime;
+ (id)JSONKeyPathsByPropertyKey;
@end
