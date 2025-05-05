@interface SFProductInventoryResult : NSObject
@property (nonatomic) NSString productIdentifier;
@property (nonatomic) NSArray availability;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSData jsonData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)productIdentifier;
- (id)initWithProtobuf:;
- (void)setProductIdentifier:;
- (id)initWithCoder:;
- (id)jsonData;
- (id)availability;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)setAvailability:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
