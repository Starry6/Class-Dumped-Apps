@interface WBSCredentialMatch : NSObject
@property (nonatomic) NSString user;
@property (nonatomic) NSString host;
@property (nonatomic) NSString password;
@property (nonatomic) NSDate creationDate;
@property (nonatomic) WBSSavedAccount savedAccount;
@property (nonatomic) NSURLProtectionSpace protectionSpace;
@property (nonatomic) NSString completion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)completion;
- (id)password;
- (id)host;
- (id)protectionSpace;
- (id)debugDescription;
- (id)user;
- (void).cxx_destruct;
- (id)creationDate;
- (id)savedAccount;
- (id)initWithSavedAccount:protectionSpace:;
@end
