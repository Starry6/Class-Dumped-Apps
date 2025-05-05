@interface BLSBacklightChangeEvent : NSObject
@property (nonatomic) Q eventID;
@property (nonatomic) q state;
@property (nonatomic) q previousState;
@property (nonatomic) BLSBacklightChangeRequest changeRequest;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)encodeWithXPCDictionary:;
- (unsigned long long)eventID;
- (id)bls_loggingString;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)bls_shortLoggingString;
- (void)encodeWithCoder:;
- (id)initWithXPCDictionary:;
- (long long)state;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (long long)previousState;
- (id)changeRequest;
- (id)initWithEventID:state:previousState:changeRequest:;
+ (BOOL)supportsSecureCoding;
@end
