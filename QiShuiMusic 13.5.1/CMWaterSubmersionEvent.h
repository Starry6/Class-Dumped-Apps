@interface CMWaterSubmersionEvent : NSObject
@property (nonatomic) NSDate date;
@property (nonatomic) q state;
- (void)dealloc;
- (id)initWithCoder:;
- (id)date;
- (void)encodeWithCoder:;
- (long long)state;
- (id)description;
- (id)copyWithZone:;
- (id)initWithEvent:andDate:;
+ (BOOL)supportsSecureCoding;
@end
