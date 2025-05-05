@interface HybridSettingsSyncTaskConfig : NSObject
@property (nonatomic) NSString host;
@property (nonatomic) NSDictionary queryItems;
@property (nonatomic) double timeInterval;
- (id)queryItems;
- (id)host;
- (void)setHost:;
- (void)setQueryItems:;
- (void)setTimeInterval:;
- (double)timeInterval;
- (void).cxx_destruct;
@end
