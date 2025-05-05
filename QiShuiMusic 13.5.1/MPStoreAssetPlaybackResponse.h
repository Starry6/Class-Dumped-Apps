@interface MPStoreAssetPlaybackResponse : NSObject
@property (nonatomic) NSDictionary dialogDictionary;
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) NSArray fileAssetInfoList;
@property (nonatomic) MPStoreHLSAssetInfo hlsAssetInfo;
@property (nonatomic) BOOL liveRadioStream;
@property (nonatomic) NSArray radioStreamAssetInfoList;
@property (nonatomic) @ suzeLeaseID;
@property (nonatomic) BOOL subscriptionRequired;
@property (nonatomic) BOOL onlineSubscriptionKeysRequired;
- (id)expirationDate;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (id)dialogDictionary;
- (id)_copyWithPlaybackResponseClass:;
- (id)fileAssetInfoList;
- (id)hlsAssetInfo;
- (BOOL)isLiveRadioStream;
- (id)radioStreamAssetInfoList;
- (id)suzeLeaseID;
- (BOOL)isSubscriptionRequired;
- (BOOL)onlineSubscriptionKeysRequired;
@end
