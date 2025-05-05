@interface CNUIDowntimeLogger : NSObject
@property (nonatomic) NSObject<OS_os_log> log;
- (id)init;
- (id)log;
- (void).cxx_destruct;
- (id)initWithLog:;
- (void)logResultOfFetchingContacts:ofFamilyMember:;
- (void)logSuccessFetchingContacts:ofFamilyMember:;
- (void)logFailure:fetchingContactsOfFamilyMember:;
- (void)logSuccessUpdatingContactListByAddingContacts:ofFamilyMember:;
- (void)logFailure:updatingContactListByAddingContacts:ofFamilyMember:;
- (void)logSuccessUpdatingContactListByRemovingContacts:ofFamilyMember:;
- (void)logFailure:updatingContactListByRemovingContacts:ofFamilyMember:;
- (void)logSuccessUpdatingContactWhitelistByAddingContacts:ofFamilyMember:;
- (void)logFailure:updatingContactWhitelistByAddingContacts:ofFamilyMember:;
- (void)logSuccessUpdatingContactWhitelistByRemovingContacts:ofFamilyMember:;
- (void)logFailure:updatingContactWhitelistByRemovingContacts:ofFamilyMember:;
- (void)logFetchingFamilyCircleError:;
- (void)logFetchingMeError:;
+ (id)sharedLogger;
@end
