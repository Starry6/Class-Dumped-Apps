@interface WiFiAwarePublishDatapathSecurityConfiguration : NSObject
@property (nonatomic) NSArray pmkList;
@property (nonatomic) NSArray passphraseList;
@property (nonatomic) NSData pmkID;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)pmkID;
- (id)initWithPMKList:passphraseList:;
- (id)initWithPMK:andPMKID:;
- (id)pmkList;
- (id)passphraseList;
+ (BOOL)supportsSecureCoding;
@end
