@interface AWEUserContextManagerLoginMonitor : NSObject
@property (nonatomic) NSString pageName;
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSDate creatDate;
@property (nonatomic) Q platform;
- (id)creatDate;
- (id)initWith:startDate:platform:;
- (id)loginSuccessMonitorParams;
- (void)setCreatDate:;
- (id)startDate;
- (void)setStartDate:;
- (unsigned long long)platform;
- (void).cxx_destruct;
- (void)setPlatform:;
- (id)pageName;
- (void)setPageName:;
@end
