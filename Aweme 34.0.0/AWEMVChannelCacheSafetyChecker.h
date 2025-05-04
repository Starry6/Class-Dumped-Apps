@interface AWEMVChannelCacheSafetyChecker : NSObject
@property (nonatomic) <AWEFeedSafetyCheckProtocol> safetyCheckHandler;
@property (nonatomic) BOOL cacheIsSafety;
@property (nonatomic) q cacheUnsafetyFirstIndex;
@property (nonatomic) AWEMVChannelPageContext context;
- (id)safetyCheckHandler;
- (void)setSafetyCheckHandler:;
- (void)setCacheIsSafety:;
- (void)findUnsafeIndex:awemeList:isCurrentModel:;
- (BOOL)cacheIsSafety;
- (void)setCacheUnsafetyFirstIndex:;
- (void)checkVideoSafety:;
- (long long)cacheUnsafetyFirstIndex;
- (id)init;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
+ (id)shared;
@end
