@interface FAFamilyMemberPhotoRequest : AAFamilyRequest
@property (nonatomic) NSNumber familyMemberDSID;
@property (nonatomic) NSString familyMemberAltDSID;
@property (nonatomic) ACAccount iTunesAccount;
@property (nonatomic) NSString serverCacheTag;
- (id)urlString;
- (id)iTunesAccount;
- (void)setiTunesAccount:;
- (void)setServerCacheTag:;
- (id)urlRequest;
- (id)serverCacheTag;
- (void).cxx_destruct;
- (id)initWithMemberDSID:accountStore:;
- (id)initWithMemberAltDSID:accountStore:;
- (id)familyMemberDSID;
- (void)setFamilyMemberDSID:;
- (id)familyMemberAltDSID;
- (void)setFamilyMemberAltDSID:;
+ (Class)responseClass;
@end
