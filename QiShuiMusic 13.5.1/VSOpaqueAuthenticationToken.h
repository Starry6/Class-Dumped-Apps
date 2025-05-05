@interface VSOpaqueAuthenticationToken : NSObject
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) NSString body;
@property (nonatomic) NSData serializedData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
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
- (BOOL)isEqual:;
- (id)initWithSerializedData:;
- (BOOL)isFromUnsupportedProvider;
@end
