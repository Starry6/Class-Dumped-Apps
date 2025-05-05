@interface SFShowContactCardCommand : SFCommand
@property (nonatomic) NSString contactIdentifier;
@property (nonatomic) BOOL isSuggestedContact;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSData jsonData;
@property (nonatomic) NSString commandDetail;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)_cpCommandType;
- (void)setContactIdentifier:;
- (id)initWithProtobuf:;
- (id)contactIdentifier;
- (id)initWithCoder:;
- (id)jsonData;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:;
- (BOOL)isSuggestedContact;
- (void)setIsSuggestedContact:;
- (BOOL)hasIsSuggestedContact;
+ (BOOL)supportsSecureCoding;
@end
