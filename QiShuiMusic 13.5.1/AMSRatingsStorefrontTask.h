@interface AMSRatingsStorefrontTask : AMSTask
@property (nonatomic) Q mediaType;
@property (nonatomic) <AMSBagProtocol> bag;
@property (nonatomic) NSString clientIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)mediaType;
- (void).cxx_destruct;
- (id)bag;
- (id)clientIdentifier;
- (id)performTask;
- (id)initWithMediaType:clientIdentifier:bag:;
- (id)_urlForMediaType:;
+ (id)createBagForSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (id)bagKeySet;
@end
