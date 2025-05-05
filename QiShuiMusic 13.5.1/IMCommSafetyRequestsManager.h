@interface IMCommSafetyRequestsManager : NSObject
@property (nonatomic) MADService service;
@property (nonatomic) NSMutableDictionary cachedResults;
- (void)setService:;
- (id)init;
- (void)dealloc;
- (id)service;
- (id)cachedResults;
- (void).cxx_destruct;
- (void)setCachedResults:;
- (id)cachedResultForImage:withChatID:;
- (void)isSensitiveImage:withChatID:completionHandler:;
- (id)_identifierForURL:withChatID:;
- (void)_setSensitiveValue:forIdentifier:;
- (void)_dispatchMADProcessingRequest:withChatID:completionHandler:;
- (void)isSensitiveCGImage:withOrientation:completionHandler:;
+ (id)sharedManager;
@end
