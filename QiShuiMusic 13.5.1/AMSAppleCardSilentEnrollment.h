@interface AMSAppleCardSilentEnrollment : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)createBagForSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (id)bagKeySet;
+ (id)gsTokenForAccount:error:;
+ (id)headersForAccount:;
@end
