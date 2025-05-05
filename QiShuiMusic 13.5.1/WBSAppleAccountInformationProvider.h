@interface WBSAppleAccountInformationProvider : NSObject
@property (nonatomic) BOOL isSafariSyncEnabled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)appleAccountSecurityState;
- (BOOL)isSafariSyncEnabled;
- (void)getAppleAccountSecurityStateWithCompletion:;
- (unsigned long long)_primaryAppleAccountSecurityLevel;
@end
