@interface STUnifiedTransportPayloadDestination : NSObject
@property (nonatomic) NSString address;
@property (nonatomic) NSString type;
@property (nonatomic) Q state;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setState:;
- (id)initWithDSID:;
- (BOOL)updateWithDictionaryRepresentation:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)type;
- (unsigned long long)state;
- (void).cxx_destruct;
- (id)description;
- (id)address;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithAddress:type:;
- (id)initWithAddress:type:state:;
+ (BOOL)supportsSecureCoding;
@end
