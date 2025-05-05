@interface VKAnalyticsProcessor : NSObject
@property (nonatomic) VKAnalyticsSessionAccumulator sessionAccumulator;
@property (nonatomic) BOOL isPublicAPI;
- (void)processAndSendSession:;
- (void)processAndSendEvent:;
- (BOOL)isPublicAPI;
- (void)setSessionAccumulator:;
- (void).cxx_destruct;
- (id)sessionAccumulator;
- (void)sendCoreAnalyticsEvent:block:;
- (void)setIsPublicAPI:;
@end
