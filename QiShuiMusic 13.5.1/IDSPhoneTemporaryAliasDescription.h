@interface IDSPhoneTemporaryAliasDescription : NSObject
@property (nonatomic) IDSURI URI;
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) BOOL selected;
- (BOOL)selected;
- (id)URI;
- (id)initWithCoder:;
- (id)expirationDate;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)initWithURI:expirationDate:selected:;
+ (BOOL)supportsSecureCoding;
@end
