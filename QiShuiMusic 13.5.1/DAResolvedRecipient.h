@interface DAResolvedRecipient : NSObject
@property (nonatomic) q status;
@property (nonatomic) q certificatesStatus;
@property (nonatomic) NSMutableDictionary mResolvedEmailToX509Certs;
@property (nonatomic) q availabilityStatus;
@property (nonatomic) NSString mergedFreeBusy;
@property (nonatomic) NSDictionary resolvedEmailToX509Certs;
- (void)setStatus:;
- (void).cxx_destruct;
- (id)description;
- (long long)status;
- (long long)availabilityStatus;
- (void)setAvailabilityStatus:;
- (id)resolvedEmailToX509Certs;
- (void)addCert:forEmailAddress:;
- (long long)certificatesStatus;
- (void)setCertificatesStatus:;
- (id)mergedFreeBusy;
- (void)setMergedFreeBusy:;
- (id)mResolvedEmailToX509Certs;
- (void)setMResolvedEmailToX509Certs:;
@end
