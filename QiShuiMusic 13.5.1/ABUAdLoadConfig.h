@interface ABUAdLoadConfig : NSObject
@property (nonatomic) NSArray mediaSlotConfigs;
@property (nonatomic) ABUMediationSlotConfig slotConfig;
@property (nonatomic) NSString linkID;
@property (nonatomic) BOOL isPreload;
@property (nonatomic) BOOL isPreloadCache;
@property (nonatomic) q preloadType;
@property (nonatomic) q loadTime;
@property (nonatomic) NSDictionary filterExtra;
- (void)setFilterExtra:;
- (void)setPreloadType:;
- (id)filterExtra;
- (BOOL)isPreload;
- (BOOL)isPreloadCache;
- (id)mediaSlotConfigs;
- (void)setMediaSlotConfigs:;
- (void)setSlotConfig:;
- (id)slotConfig;
- (void)updateLinkID:;
- (id)init;
- (void).cxx_destruct;
- (long long)loadTime;
- (id)linkID;
- (long long)preloadType;
@end
