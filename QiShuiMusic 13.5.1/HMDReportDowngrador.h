@interface HMDReportDowngrador : NSObject
@property (nonatomic) BOOL enabled;
- (BOOL)needUploadWithLogType:serviceName:aid:;
- (BOOL)needUploadWithLogType:serviceName:aid:currentTime:;
- (void)updateDowngradeRule:;
- (void)updateDowngradeRule:forAid:;
- (id)init;
- (BOOL)enabled;
- (void)setEnabled:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
