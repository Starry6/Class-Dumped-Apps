@interface DNDClientEventBehavior : NSObject
@property (nonatomic) NSString redactedDescription;
@property (nonatomic) Q resolutionReason;
@property (nonatomic) NSUUID activeModeUUID;
@property (nonatomic) DNDClientEventDetails eventDetails;
@property (nonatomic) Q interruptionSuppression;
- (id)initWithEventDetails:interruptionSuppression:resolutionReason:activeModeUUID:;
- (id)_descriptionForRedacted:;
- (id)redactedDescription;
- (id)activeModeUUID;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (unsigned long long)resolutionReason;
- (id)eventDetails;
- (void)encodeWithCoder:;
- (unsigned long long)interruptionSuppression;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
