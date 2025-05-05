@interface WBSSavedAccountMatch : NSObject
@property (nonatomic) NSString user;
@property (nonatomic) NSString host;
@property (nonatomic) NSString password;
@property (nonatomic) NSDate creationDate;
@property (nonatomic) WBSSavedAccount savedAccount;
@property (nonatomic) NSURLProtectionSpace protectionSpace;
@property (nonatomic) q matchLevel;
@property (nonatomic) WBSAutoFillPasskey autoFillPasskey;
- (id)completion;
- (id)password;
- (id)host;
- (id)protectionSpace;
- (id)debugDescription;
- (id)user;
- (void).cxx_destruct;
- (id)creationDate;
- (id)autoFillPasskey;
- (id)savedAccount;
- (long long)matchLevel;
- (id)initWithSavedAccount:protectionSpace:matchLevel:;
- (id)initWithSavedAccount:protectionSpace:matchLevel:autoFillPasskey:;
@end
