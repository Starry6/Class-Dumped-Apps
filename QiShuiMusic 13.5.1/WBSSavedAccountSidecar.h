@interface WBSSavedAccountSidecar : NSObject
@property (nonatomic) NSDictionary originalKeychainDictionary;
@property (nonatomic) NSString user;
@property (nonatomic) WBSTOTPGenerator totpGenerator;
@property (nonatomic) NSString notesEntry;
@property (nonatomic) WBSPasswordWarningHideMarker hideWarningMarker;
@property (nonatomic) NSDate lastOneTimeShareDateForPasskey;
@property (nonatomic) NSURLProtectionSpace protectionSpace;
@property (nonatomic) NSDictionary dictionaryRepresentation;
- (void)setUser:;
- (id)protectionSpace;
- (unsigned long long)hash;
- (id)user;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setNotesEntry:;
- (id)lastOneTimeShareDateForPasskey;
- (void)setTotpGenerator:;
- (id)notesEntry;
- (id)initWithUser:protectionSpace:;
- (id)initWithUser:protectionSpace:data:;
- (BOOL)isSidecarDataEqualForMergingSavedAccounts:;
- (id)totpGenerator;
- (id)hideWarningMarker;
- (void)setHideWarningMarker:;
- (void)setLastOneTimeShareDateForPasskey:;
- (id)originalKeychainDictionary;
- (void)setOriginalKeychainDictionary:;
@end
