@interface AMSAgeVerificationTask : AMSTask
@property (nonatomic) AMSQRCodeDialogTask task;
@property (nonatomic) ACAccount account;
@property (nonatomic) <AMSBagProtocol> bag;
@property (nonatomic) NSDictionary options;
@property (nonatomic) NSString pincode;
@property (nonatomic) <AMSRequestPresentationDelegate> presentationDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)account;
- (void)setOptions:;
- (id)presentationDelegate;
- (id)task;
- (void)setTask:;
- (id)options;
- (void).cxx_destruct;
- (id)bag;
- (void)_handleAccountStoreDidChangeNotification:;
- (id)performTask;
- (id)initWithAccount:bag:options:presentationDelegate:;
- (id)isVerificationNeeded;
- (id)_performTaskForAccount:withBag:;
- (void)_startObservingAccountStoreChanges;
- (void)_stopObservingAccountStoreChanges;
- (void)_handleAccountStoreDidChangeNotification:at:;
- (id)pincode;
- (void)setPincode:;
+ (id)createBagForSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (id)bagKeySet;
+ (id)_errorCheckWithAccount:bag:;
+ (id)_thirtyDaysInTheFutureFrom:;
@end
