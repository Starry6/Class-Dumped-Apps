@interface SFProduct : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString productIdentifier;
@property (nonatomic) NSURL availabilityURL;
@property (nonatomic) NSString displayName;
@property (nonatomic) BOOL buyable;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSData jsonData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)productIdentifier;
- (id)initWithProtobuf:;
- (void)setProductIdentifier:;
- (id)identifier;
- (id)initWithCoder:;
- (id)jsonData;
- (void)setDisplayName:;
- (id)displayName;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)setIdentifier:;
- (id)copyWithZone:;
- (id)availabilityURL;
- (void)setAvailabilityURL:;
- (BOOL)buyable;
- (void)setBuyable:;
- (BOOL)hasBuyable;
+ (BOOL)supportsSecureCoding;
@end
