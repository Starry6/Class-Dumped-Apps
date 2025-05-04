@interface AWEMultiTabMallBadgeModel : MTLModel
@property (nonatomic) NSString text;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) double stayDuration;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)stayDuration;
- (void)setStayDuration:;
- (void)setStartTime:;
- (double)endTime;
- (void)setEndTime:;
- (void)setText:;
- (id)text;
- (void).cxx_destruct;
- (double)startTime;
+ (id)JSONKeyPathsByPropertyKey;
@end
