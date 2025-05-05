@interface FTRegionSupport : NSObject
@property (nonatomic) FTMessageDelivery delivery;
@property (nonatomic) NSArray regions;
@property (nonatomic) BOOL isLoaded;
@property (nonatomic) BOOL isLoading;
- (BOOL)isLoading;
- (void)dealloc;
- (id)regions;
- (void)startLoading;
- (void)setRegions:;
- (void).cxx_destruct;
- (BOOL)isLoaded;
- (id)delivery;
- (id)regionForID:;
- (void)_buildMessageDeliveryIfNeeded;
- (void)flushRegions;
- (void)setDelivery:;
+ (id)sharedInstance;
@end
