@interface CNUILikenessFingerprint : NSObject
- (id)initWithContact:;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithImpl:;
- (id)initWithContacts:badges:scope:;
- (BOOL)hasContactIdentifier:;
+ (id)fingerprintForScope:;
+ (id)fingerprintForContactIdentifier:;
+ (id)fingerprintForContact:;
+ (id)publicFingerprintForContact:;
+ (id)implForContact:;
+ (id)fingerprintForContacts:scope:;
+ (id)fingerprintForData:;
+ (id)publicFingerprintForContacts:scope:;
@end
