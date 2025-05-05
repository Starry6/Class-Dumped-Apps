@interface MPMutableStoreAssetPlaybackResponse : MPStoreAssetPlaybackResponse
@property (nonatomic) NSDictionary dialogDictionary;
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) NSArray fileAssetInfoList;
@property (nonatomic) MPStoreHLSAssetInfo hlsAssetInfo;
@property (nonatomic) BOOL liveRadioStream;
@property (nonatomic) NSArray radioStreamAssetInfoList;
@property (nonatomic) @ suzeLeaseID;
@property (nonatomic) BOOL subscriptionRequired;
@property (nonatomic) BOOL onlineSubscriptionKeysRequired;
- (void)setExpirationDate:;
- (id)copyWithZone:;
- (void)setDialogDictionary:;
- (void)setFileAssetInfoList:;
- (void)setHlsAssetInfo:;
- (void)setLiveRadioStream:;
- (void)setRadioStreamAssetInfoList:;
- (void)setSuzeLeaseID:;
- (void)setSubscriptionRequired:;
- (void)setOnlineSubscriptionKeysRequired:;
@end
