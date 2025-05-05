@interface CNReputationLogger : NSObject
- (void)contactsConfirmedTrustOfPhoneNumber;
- (void)queryForHandle:didFinishWithReputation:;
- (void)couldNotQueryContactsForEmailAddressWithError:;
- (void)couldNotQueryContactsForPhoneNumberWithError:;
- (void)couldNotQueryCoreRecentsWithError:;
- (void)beginQueryForHandle:;
- (void)contactsCouldNotConfirmTrustOfPhoneNumber;
- (void)contactsCouldNotConfirmTrustOfEmailAddress;
- (void)queryForHandle:didFailWithError:;
- (void)coreRecentsConfirmedTrust;
- (void)coreRecentsCouldNotConfirmTrust;
- (void)timeToResolve:;
- (void)reputationUnestablished;
- (void)contactsConfirmedTrustOfEmailAddress;
+ (id)queryLog;
+ (id)performanceLog;
+ (id)describeScore:;
+ (id)obfuscateHandle:;
+ (id)obfuscate:;
@end
