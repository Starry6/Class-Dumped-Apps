@interface CMPedometerEvent : NSObject
@property (nonatomic) NSDate date;
@property (nonatomic) q type;
- (void)dealloc;
- (id)initWithCoder:;
- (id)date;
- (void)encodeWithCoder:;
- (long long)type;
- (id)description;
- (id)copyWithZone:;
- (id)initWithEventDate:type:;
+ (BOOL)supportsSecureCoding;
+ (id)eventStringFromType:;
@end
