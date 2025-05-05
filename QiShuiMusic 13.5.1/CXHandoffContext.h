@interface CXHandoffContext : NSObject
@property (nonatomic) NSString handoffIdentifier;
@property (nonatomic) BOOL outgoing;
@property (nonatomic) CXHandle remoteHandle;
@property (nonatomic) NSDictionary context;
@property (nonatomic) NSDictionary dictionaryRepresentation;
- (id)init;
- (id)context;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initWithDictionaryRepresentation:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (void)setContext:;
- (BOOL)isEqual:;
- (BOOL)isOutgoing;
- (void)setOutgoing:;
- (id)handoffIdentifier;
- (id)remoteHandle;
- (id)initWithHandoffIdentifier:;
- (BOOL)isEqualToHandoffContext:;
- (void)setRemoteHandle:;
+ (BOOL)supportsSecureCoding;
@end
