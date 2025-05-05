@interface CMIndoorOutdoorState : NSObject
@property (nonatomic) NSDate startDate;
@property (nonatomic) q type;
@property (nonatomic) q confidence;
- (long long)confidence;
- (id)startDate;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)type;
- (id)description;
- (id)copyWithZone:;
- (id)initWithStartDate:type:confidence:;
+ (BOOL)supportsSecureCoding;
@end
