@interface ASDMediaClipTask : AMSTask
@property (nonatomic) NSNumber externalVersionID;
@property (nonatomic) NSString bundleID;
@property (nonatomic) AMSProcessInfo clientInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setClientInfo:;
- (id)clientInfo;
- (void).cxx_destruct;
- (id)bundleID;
- (id)perform;
- (void)setBundleID:;
- (id)externalVersionID;
- (void)setExternalVersionID:;
- (id)initWithClientID:bag:;
+ (id)createBagForSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (id)bagKeySet;
@end
