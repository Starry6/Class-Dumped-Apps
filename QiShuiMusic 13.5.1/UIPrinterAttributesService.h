@interface UIPrinterAttributesService : NSObject
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)startPollForPrinterWarningStatus:completionHandler:;
- (void)pollForPrinterWarningStatus;
- (void)stopPrinterWarningPolling;
+ (id)instance;
@end
