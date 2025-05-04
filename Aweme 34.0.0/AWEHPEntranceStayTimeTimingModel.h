@interface AWEHPEntranceStayTimeTimingModel : NSObject
@property (nonatomic) NSString entranceId;
@property (nonatomic) NSString selectedTabId;
@property (nonatomic) q timingInterval;
- (id)entranceId;
- (void)setEntranceId:;
- (id)selectedTabId;
- (void)setSelectedTabId:;
- (long long)timingInterval;
- (void)setTimingInterval:;
- (void).cxx_destruct;
@end
