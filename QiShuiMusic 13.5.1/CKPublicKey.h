@interface CKPublicKey : NSObject
@property (nonatomic) NSData publicKey;
@property (nonatomic) q version;
@property (nonatomic) NSDate expiration;
@property (nonatomic) NSData certData;
@property (nonatomic) NSString protectionSource;
- (BOOL)hasExpired;
- (id)publicKey;
- (long long)version;
- (void).cxx_destruct;
- (id)expiration;
- (id)initWithPublicKey:version:expiration:certificateData:protectionSource:;
- (id)certData;
- (id)protectionSource;
@end
