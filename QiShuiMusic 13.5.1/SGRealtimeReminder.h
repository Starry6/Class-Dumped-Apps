@interface SGRealtimeReminder : NSObject
@property (nonatomic) SGReminder reminder;
@property (nonatomic) NSString notes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)notes;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithReminder:notes:;
- (BOOL)isEqualToRealtimeReminder:;
- (id)reminder;
+ (BOOL)supportsSecureCoding;
@end
