@interface BDUGSyncTracker : NSObject
+ (void)trackReportWithPackets:channel:;
+ (void)_eventV3:params:;
+ (void)trackArriverWithPackets:channel:;
+ (void)trackSubmitWithPackets:;
@end
