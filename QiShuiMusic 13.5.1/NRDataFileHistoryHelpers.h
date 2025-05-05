@interface NRDataFileHistoryHelpers : NSObject
+ (id)unarchiveSecureProperties;
+ (BOOL)createMissingDates:;
+ (id)unarchiveDeviceHistory;
+ (BOOL)archiveDeviceHistory:;
+ (BOOL)archiveSecureProperties:;
@end
