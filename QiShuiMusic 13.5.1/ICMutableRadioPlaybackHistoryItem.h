@interface ICMutableRadioPlaybackHistoryItem : ICRadioPlaybackHistoryItem
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) NSNumber pauseTime;
@property (nonatomic) NSDictionary serverTrackInfo;
@property (nonatomic) NSDate skipDate;
@property (nonatomic) q storeIdentifier;
- (void)setExpirationDate:;
- (void)setStoreIdentifier:;
- (void)setPauseTime:;
- (void)setServerTrackInfo:;
- (void)setSkipDate:;
@end
