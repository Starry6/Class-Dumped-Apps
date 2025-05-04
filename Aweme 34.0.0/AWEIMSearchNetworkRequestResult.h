@interface AWEIMSearchNetworkRequestResult : NSObject
@property (nonatomic) NSArray convDictArr;
@property (nonatomic) Q activeRefresh;
@property (nonatomic) double firstOnlineUpdateTime;
- (double)firstOnlineUpdateTime;
- (void)setFirstOnlineUpdateTime:;
- (void)setConvDictArr:;
- (id)convDictArr;
- (void).cxx_destruct;
- (unsigned long long)activeRefresh;
- (void)setActiveRefresh:;
@end
