@interface VSSAMLAuthenticationToken : NSObject
@property (nonatomic) NSData serializedData;
@property (nonatomic) NSDate simulatedExpirationDate;
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) NSString body;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)body;
- (void)setExpirationDate:;
- (BOOL)isOpaque;
- (id)serializedData;
- (unsigned long long)hash;
- (id)expirationDate;
- (void)setBody:;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)description;
- (void)setSerializedData:;
- (BOOL)isEqual:;
- (id)initWithSerializedData:;
- (BOOL)isFromUnsupportedProvider;
- (id)simulatedExpirationDate;
- (void)setSimulatedExpirationDate:;
@end
