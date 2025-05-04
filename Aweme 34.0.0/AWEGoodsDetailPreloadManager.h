@interface AWEGoodsDetailPreloadManager : NSObject
@property (nonatomic) BOOL setted;
@property (nonatomic) AWEPOILynxPreloadManager lynxPreloadManager;
@property (nonatomic) NSString channel;
@property (nonatomic) NSArray urlSchemes;
@property (nonatomic) DitoRunLoopDispatch runLoopDispatch;
- (void)preloadWithBizCode:;
- (void)reportTrackWithContext:;
- (id)lynxPreloadManager;
- (void)setLynxPreloadManager:;
- (BOOL)setted;
- (void)setSetted:;
- (void)setRunLoopDispatch:;
- (id)runLoopDispatch;
- (id)urlSchemes;
- (id)init;
- (id)channel;
- (void)setChannel:;
- (void).cxx_destruct;
- (void)setUrlSchemes:;
- (void)updateWithContext:;
+ (id)sharedInstance;
@end
