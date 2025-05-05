@interface IESECPDPSliceUpdateContext : NSObject
@property (nonatomic) NSHashTable viewList;
@property (nonatomic) q pdpTimes;
- (long long)pdpTimes;
- (void)setPdpTimes:;
- (void)setViewList:;
- (id)viewList;
- (void).cxx_destruct;
+ (long long)enterProductDetail;
+ (void)removeNeedRelayout:;
+ (void)setNeedRelayout:;
+ (BOOL)viewNeedRelayout:;
+ (id)shareInstance;
@end
