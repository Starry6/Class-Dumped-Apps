@interface USUsageReporter : NSObject
@property (nonatomic) NSXPCConnection xpcConnection;
- (id)init;
- (void)dealloc;
- (id)xpcConnection;
- (void).cxx_destruct;
- (void)fetchReportsDuringInterval:partitionInterval:completionHandler:;
- (id)getLocalDeviceIdentifierAndReturnError:;
- (void)fetchReportsDuringInterval:partitionInterval:forceImmediateSync:completionHandler:;
- (id)fetchUsageForApplications:webDomains:categories:interval:error:;
+ (id)getLocalDeviceIdentifierAndReturnError:;
+ (void)synchronizeUsageWithCompletionHandler:;
@end
