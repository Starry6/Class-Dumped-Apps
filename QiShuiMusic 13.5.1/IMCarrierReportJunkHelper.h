@interface IMCarrierReportJunkHelper : NSObject
+ (BOOL)isReportJunkServiceAllowedForMessageItem:junkChatStyle:;
+ (id)junkReportMessageItemForMessageItem:account:junkChatStyle:;
+ (BOOL)canReportJunkOverCellularServiceOfMessageItem:;
+ (void)collectReportJunkMetricsForJunkMessageItem:junkChatStyle:totalMessagesInThread:;
+ (void)setHandleParametersOfMessageItem:usingAccount:usingMessageItem:junkChatStyle:;
+ (id)reportJunkCarrierAddressForMessageItem:junkChatStyle:;
+ (id)fetchSMSReportJunkCarrierAddressForPhoneNumber:simID:;
+ (id)fetchMMSReportJunkCarrierAddressForPhoneNumber:simID:;
+ (id)createJunkReportMessageItemBodyForMessageItem:junkChatStyle:;
+ (id)createJunkReportMessageBodyTextForMessageItem:junkChatStyle:;
+ (id)messageItemReceiveDate:;
+ (id)jsonSerializeDictionary:;
+ (void)simIDPhoneNumberFromMessageDestinationCallerID:simID:phoneNumber:;
+ (BOOL)validateReportJunkCarrierAddress:;
+ (id)cellularServiceStatusOfCallerID:;
@end
