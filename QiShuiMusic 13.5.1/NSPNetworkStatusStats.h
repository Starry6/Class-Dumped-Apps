@interface NSPNetworkStatusStats : NSPProxyAnalytics
@property (nonatomic) NSString tierType;
@property (nonatomic) Q wifiStatusBlockedCount;
@property (nonatomic) Q wifiStatusDisabledCount;
@property (nonatomic) Q wifiStatusActiveCount;
@property (nonatomic) Q cellStatusBlockedCount;
@property (nonatomic) Q cellStatusDisabledCount;
@property (nonatomic) Q cellStatusActiveCount;
@property (nonatomic) Q wiredStatusBlockedCount;
@property (nonatomic) Q wiredStatusDisabledCount;
@property (nonatomic) Q wiredStatusActiveCount;
- (void)setTierType:;
- (id)eventName;
- (void).cxx_destruct;
- (id)analyticsDict;
- (id)tierType;
- (unsigned long long)wifiStatusBlockedCount;
- (void)setWifiStatusBlockedCount:;
- (unsigned long long)wifiStatusDisabledCount;
- (void)setWifiStatusDisabledCount:;
- (unsigned long long)wifiStatusActiveCount;
- (void)setWifiStatusActiveCount:;
- (unsigned long long)cellStatusBlockedCount;
- (void)setCellStatusBlockedCount:;
- (unsigned long long)cellStatusDisabledCount;
- (void)setCellStatusDisabledCount:;
- (unsigned long long)cellStatusActiveCount;
- (void)setCellStatusActiveCount:;
- (unsigned long long)wiredStatusBlockedCount;
- (void)setWiredStatusBlockedCount:;
- (unsigned long long)wiredStatusDisabledCount;
- (void)setWiredStatusDisabledCount:;
- (unsigned long long)wiredStatusActiveCount;
- (void)setWiredStatusActiveCount:;
@end
