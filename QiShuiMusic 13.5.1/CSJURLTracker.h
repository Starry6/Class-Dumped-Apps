@interface CSJURLTracker : NSObject
@property (nonatomic) <BUPersistenceProtocol> persistence;
@property (nonatomic) NSURLSession uploadSession;
- (void)trackURL:model:;
- (id)adIdCachedKey:dataDict:;
- (void)addTimesCachedKey:dataDict:;
- (void)cacheFailedURL:dict:;
- (void)receiveWillEnterForegroundNotification:;
- (void)removeURLFromCacheWithKey:;
- (void)setUploadSession:;
- (long long)timesCachedKey:dataDict:;
- (void)trackURL:;
- (void)trackURL:model:isNormal:;
- (void)trackURLs:;
- (void)trackURLs:model:;
- (id)urlCachedKey:dataDict:;
- (id)persistence;
- (void)setPersistence:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)uploadSession;
+ (id)shareURLTracker;
@end
