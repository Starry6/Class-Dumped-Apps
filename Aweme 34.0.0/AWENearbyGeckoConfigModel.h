@interface AWENearbyGeckoConfigModel : AWEBaseApiModel
@property (nonatomic) NSString channel;
@property (nonatomic) NSArray blackList;
@property (nonatomic) Q leastGeckoID;
@property (nonatomic) BOOL needReload;
- (void)setNeedReload:;
- (BOOL)needReload;
- (id)blackList;
- (void)setBlackList:;
- (unsigned long long)leastGeckoID;
- (void)setLeastGeckoID:;
- (id)channel;
- (void)setChannel:;
- (void).cxx_destruct;
+ (BOOL)automaticallyDefaultMapping;
@end
