@interface SFContactCopyItem : SFCopyItem
@property (nonatomic) SFPerson person;
@property (nonatomic) NSURL contactFileLocation;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSData jsonData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithProtobuf:;
- (id)initWithCoder:;
- (id)jsonData;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setPerson:;
- (id)person;
- (id)dictionaryRepresentation;
- (id)copyWithZone:;
- (id)contactFileLocation;
- (void)setContactFileLocation:;
+ (BOOL)supportsSecureCoding;
@end
