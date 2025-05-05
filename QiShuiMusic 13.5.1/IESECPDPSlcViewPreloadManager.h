@interface IESECPDPSlcViewPreloadManager : NSObject
@property (nonatomic) NSArray preloadData;
@property (nonatomic) IESECGoodsDetailSliceManager sliceManager;
@property (nonatomic) BOOL needStopPreload;
- (void)setPreloadData:;
- (BOOL)needStopPreload;
- (id)initWithSliceManager:;
- (void)initializePreloadData;
- (id)preloadData;
- (void)setNeedStopPreload:;
- (void)setSliceManager:;
- (id)sliceManager;
- (id)sliceViewWithGeckoURL:;
- (void)startPreload;
- (void)stopPreload;
- (void)free;
- (void).cxx_destruct;
@end
