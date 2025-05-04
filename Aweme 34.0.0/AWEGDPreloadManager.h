@interface AWEGDPreloadManager : NSObject
@property (nonatomic) BOOL setted;
@property (nonatomic) AWEPOILynxPreloadManager lynxPreloadManager;
@property (nonatomic) NSString channel;
- (void)setBizData:forKey:;
- (id)bizDataForKey:;
- (void)preloadBySchemeUrls:optimizeMemory:;
- (void)reportTrackWithContext:schemeUrls:;
- (void)setupLynxPreloadBySchemeUrls:optimizeMemory:;
- (id)lynxPreloadManager;
- (void)setLynxPreloadManager:;
- (BOOL)setted;
- (void)setSetted:;
- (id)channel;
- (void)setChannel:;
- (void).cxx_destruct;
- (void)updateWithContext:;
+ (id)sharedInstance;
@end
