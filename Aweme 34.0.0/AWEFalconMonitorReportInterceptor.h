@interface AWEFalconMonitorReportInterceptor : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didGetMetaData:forRequest:isGetMethod:isCustomInterceptor:;
+ (id)sharedInstance;
@end
