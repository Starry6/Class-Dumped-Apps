@interface AWEPOINetworkCacheDataModel : NSObject
@property (nonatomic) double duration;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL isAvailable;
@property (nonatomic) NSArray data;
- (id)initData:duration:;
- (double)timestamp;
- (BOOL)isAvailable;
- (void)setDuration:;
- (void)setTimestamp:;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
- (double)duration;
@end
