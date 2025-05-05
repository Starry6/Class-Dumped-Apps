@interface DNDStateModeAssertionMetadata : NSObject
@property (nonatomic) NSString clientIdentifier;
@property (nonatomic) NSDate userVisibleEndDate;
@property (nonatomic) NSString modeIdentifier;
@property (nonatomic) Q lifetimeType;
@property (nonatomic) NSDateInterval activeDateInterval;
- (id)modeIdentifier;
- (id)activeDateInterval;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)clientIdentifier;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned long long)lifetimeType;
- (id)userVisibleEndDate;
- (id)initWithClientIdentifier:modeIdentifier:lifetimeType:activeDateInterval:userVisibleEndDate:;
+ (BOOL)supportsSecureCoding;
@end
