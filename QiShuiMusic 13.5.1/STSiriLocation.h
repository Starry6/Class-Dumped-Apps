@interface STSiriLocation : NSObject
@property (nonatomic) NSURL addressBookID;
@property (nonatomic) NSString addressLabel;
@property (nonatomic) NSString contactName;
@property (nonatomic) NSData geoResult;
@property (nonatomic) q resultType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)contactName;
- (void)setResultType:;
- (id)initWithCoder:;
- (long long)resultType;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (void)setContactName:;
- (id)addressBookID;
- (void)setAddressBookID:;
- (id)addressLabel;
- (void)setAddressLabel:;
- (id)geoResult;
- (void)setGeoResult:;
+ (BOOL)supportsSecureCoding;
@end
