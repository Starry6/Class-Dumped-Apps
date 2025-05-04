@interface AWENearbyTaskExecuteContext : NSObject
@property (nonatomic) q pageType;
@property (nonatomic) NSDictionary data;
@property (nonatomic) NSString triggerSource;
- (id)initWithPageType:triggerSource:data:;
- (void)setPageType:;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
- (long long)pageType;
- (void)setTriggerSource:;
- (id)triggerSource;
@end
