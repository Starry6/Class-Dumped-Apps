@interface CPLPersonReference : NSObject
@property (nonatomic) NSString personIdentifier;
@property (nonatomic) NSDictionary extraProperties;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)initWithCoder:;
- (id)plistArchiveWithCPLArchiver:;
- (unsigned long long)hash;
- (id)initWithCPLArchiver:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setExtraProperties:;
- (id)personIdentifier;
- (id)extraProperties;
- (void)setPersonIdentifier:;
- (id)serializedString;
- (id)initWithSerializedString:;
+ (BOOL)supportsSecureCoding;
@end
