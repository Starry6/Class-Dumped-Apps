@interface AWEStudioSuperEntranceActivityTimeModel : AWEBaseApiModel
@property (nonatomic) NSString startTimeString;
@property (nonatomic) NSString endTimeString;
- (id)startTimeString;
- (void)setEndTimeString:;
- (id)endTimeString;
- (double)endTime;
- (BOOL)isEqualToModel:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (double)startTime;
- (id)initWithCoder:;
- (void)setStartTimeString:;
+ (id)JSONKeyPathsByPropertyKey;
@end
