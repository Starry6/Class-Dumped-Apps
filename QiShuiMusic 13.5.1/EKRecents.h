@interface EKRecents : NSObject
+ (Class)crRecentContactsLibraryClass;
+ (id)crAddressKindEmailString;
+ (id)crAddressKindPhoneNumberString;
+ (id)crRecentsDomainCalendarString;
+ (id)recentForContactWithAddress:name:kind:;
+ (void)recordRecentWithAddress:name:kind:;
+ (BOOL)recordRecentForContactWithName:emailAddress:phoneNumber:;
@end
