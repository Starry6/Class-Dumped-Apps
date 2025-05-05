@interface IDSGroupSessionBroadcastParameter : NSObject
@property (nonatomic) NSString groupSessionID;
@property (nonatomic) NSData salt;
@property (nonatomic) NSString serviceName;
@property (nonatomic) NSObject<OS_nw_parameters> parameters;
@property (nonatomic) NSObject<OS_nw_endpoint> endpoint;
- (id)serviceName;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)salt;
- (id)parameters;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)endpoint;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithGroupSessionID:serviceName:;
- (id)initWithGroupSessionID:salt:serviceName:;
- (void)_requestNWConnectionforIDSGroupSessionBroadcastParameter:;
- (id)groupSessionID;
+ (BOOL)supportsSecureCoding;
@end
