@interface AWEPOIDetailNGDataManager : NSObject
@property (nonatomic) <AWEHttpTask> asyncUIHttpTask;
@property (nonatomic) BOOL isRequestOnAir;
@property (nonatomic) AWEPOIDetailNGPageContext context;
- (BOOL)isRequestOnAir;
- (void)setIsRequestOnAir:;
- (void)fetchAsyncUIWithPoiID:longitude:latitude:completion:;
- (id)asyncUIHttpTask;
- (void)setAsyncUIHttpTask:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
