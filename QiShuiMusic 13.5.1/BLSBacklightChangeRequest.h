@interface BLSBacklightChangeRequest : NSObject
@property (nonatomic) q requestedActivityState;
@property (nonatomic) NSString explanation;
@property (nonatomic) Q timestamp;
@property (nonatomic) q sourceEvent;
@property (nonatomic) BLSBacklightChangeSourceEventMetadata sourceEventMetadata;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)explanation;
- (void)encodeWithXPCDictionary:;
- (id)sourceEventMetadata;
- (id)initWithCoder:;
- (long long)sourceEvent;
- (unsigned long long)hash;
- (long long)requestedActivityState;
- (void)encodeWithCoder:;
- (id)initWithXPCDictionary:;
- (void).cxx_destruct;
- (unsigned long long)timestamp;
- (id)description;
- (id)initWithRequestedActivityState:explanation:timestamp:sourceEvent:sourceEventMetadata:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
