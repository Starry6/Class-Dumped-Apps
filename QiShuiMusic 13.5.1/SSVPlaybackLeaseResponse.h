@interface SSVPlaybackLeaseResponse : SSVPlaybackResponse
@property (nonatomic) BOOL offlineSlotAvailable;
@property (nonatomic) NSData leaseInfoData;
@property (nonatomic) NSData subscriptionKeyBagData;
@property (nonatomic) NSData certificateData;
@property (nonatomic) Q KDMovieIdentifier;
@property (nonatomic) double leaseDuration;
- (id)certificateData;
- (void)setCertificateData:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)subscriptionKeyBagData;
- (id)leaseInfoData;
- (id)itemForItemIdentifier:;
- (double)leaseDuration;
- (BOOL)isOfflineSlotAvailable;
- (unsigned long long)KDMovieIdentifier;
- (void)setKDMovieIdentifier:;
@end
