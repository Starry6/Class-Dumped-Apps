@interface AWEFeedNearbyCardFrequencyManager : NSObject
@property (nonatomic) BOOL hadExposedInAppCycle;
@property (nonatomic) NSString mallCardPoiId;
@property (nonatomic) NSString shopCardPoiId;
@property (nonatomic) BOOL isShopCardExposedInFeed;
@property (nonatomic) BOOL isMallCardExposedInFeed;
- (id)mallCardPoiId;
- (void)setHadExposedInAppCycle:;
- (BOOL)hadExposedInAppCycle;
- (void)setMallCardPoiId:;
- (id)shopCardPoiId;
- (void)setShopCardPoiId:;
- (void)mallCardRecordFrequency;
- (id)mallCardFrequencyMsgWithModel:;
- (void)shopCardRecordFrequency;
- (id)shopCardFrequencyMsgWithModel:;
- (BOOL)isShopCardExposedInFeed;
- (void)setIsShopCardExposedInFeed:;
- (BOOL)isMallCardExposedInFeed;
- (void)setIsMallCardExposedInFeed:;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
