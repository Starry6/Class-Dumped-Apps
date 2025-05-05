@interface CMExerciseMinuteData : NSObject
@property (nonatomic) NSDate startDate;
@property (nonatomic) q recordId;
@property (nonatomic) NSUUID sourceId;
- (id)startDate;
- (void)dealloc;
- (long long)recordId;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)sourceId;
- (id)copyWithZone:;
- (id)initWithStartDate:recordId:sourceId:;
+ (BOOL)supportsSecureCoding;
+ (id)maxExerciseMinuteDataEntries;
@end
