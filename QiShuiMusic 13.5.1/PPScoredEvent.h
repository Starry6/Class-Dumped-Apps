@interface PPScoredEvent : NSObject
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSDate endDate;
@property (nonatomic) NSString title;
@property (nonatomic) double score;
- (id)startDate;
- (double)score;
- (void)setTitle:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)endDate;
- (id)title;
- (void).cxx_destruct;
- (id)description;
- (id)initWithStartDate:endDate:title:score:;
+ (BOOL)supportsSecureCoding;
@end
