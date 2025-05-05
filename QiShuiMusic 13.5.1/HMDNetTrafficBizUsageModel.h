@interface HMDNetTrafficBizUsageModel : NSObject
@property (nonatomic) NSString bizName;
@property (nonatomic) Q totalUsage;
@property (nonatomic) Q wifiBackUsage;
@property (nonatomic) Q wifiFrontUsage;
@property (nonatomic) Q mobileBackUsage;
@property (nonatomic) Q mobileFrontUsage;
@property (nonatomic) NSMutableDictionary detailMap;
- (unsigned long long)mobileBackUsage;
- (id)bizName;
- (id)formatGroupByBizWithNeedSource:;
- (id)detailMap;
- (id)formatSourceDetailForNetType:;
- (unsigned long long)mobileFrontUsage;
- (void)setBizName:;
- (void)setDetailMap:;
- (void)setMobileBackUsage:;
- (void)setMobileFrontUsage:;
- (void)setWifiBackUsage:;
- (void)setWifiFrontUsage:;
- (unsigned long long)wifiBackUsage;
- (unsigned long long)wifiFrontUsage;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)totalUsage;
- (void)setTotalUsage:;
@end
