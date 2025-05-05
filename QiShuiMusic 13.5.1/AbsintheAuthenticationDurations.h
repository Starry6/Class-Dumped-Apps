@interface AbsintheAuthenticationDurations : NSObject
@property (nonatomic) NSMutableDictionary absintheTimestamps;
@property (nonatomic) NSMutableString connectionMethod;
@property (nonatomic) NSNumber getCertificateElapsed;
@property (nonatomic) NSNumber createSessionElapsed;
@property (nonatomic) NSNumber sessionEstablishedElapsed;
@property (nonatomic) NSNumber absintheElapsed;
- (id)init;
- (void).cxx_destruct;
- (void)setConnectionMethod:;
- (id)connectionMethod;
- (void)reportAbsintheAuthenticationDurations;
- (void)setAbsintheAuthenticationTimestampForKey:;
- (void)setAbsintheConnectionMethodWith:;
- (id)calculateDuration:and:;
- (id)absintheTimestamps;
- (void)setAbsintheTimestamps:;
- (id)getCertificateElapsed;
- (void)setGetCertificateElapsed:;
- (id)createSessionElapsed;
- (void)setCreateSessionElapsed:;
- (id)sessionEstablishedElapsed;
- (void)setSessionEstablishedElapsed:;
- (id)absintheElapsed;
- (void)setAbsintheElapsed:;
@end
