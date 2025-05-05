@interface CNAvatarCacheFingerprintCollector : NSObject
@property (nonatomic) NSArray fingerprintsOfAffectedContacts;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)visitUpdateContactEvent:;
- (void)visitAddContactEvent:;
- (id)init;
- (void)visitDeleteContactEvent:;
- (void)visitDropEverythingEvent:;
- (void).cxx_destruct;
- (id)fingerprintsOfAffectedContacts;
@end
