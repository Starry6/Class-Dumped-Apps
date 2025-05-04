@interface AWEMultiTabMallTransModel : MTLModel
@property (nonatomic) NSDictionary transMap;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)transMap;
- (void)setTransMap:;
- (void)setStartTime:;
- (double)endTime;
- (void)setEndTime:;
- (void).cxx_destruct;
- (double)startTime;
+ (id)JSONKeyPathsByPropertyKey;
@end
