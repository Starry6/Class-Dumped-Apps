@interface SFContactButtonItem : SFButtonItem
@property (nonatomic) NSString contactIdentifier;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSData jsonData;
@property (nonatomic) Q uniqueId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setContactIdentifier:;
- (id)initWithProtobuf:;
- (id)contactIdentifier;
- (id)initWithCoder:;
- (id)jsonData;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
