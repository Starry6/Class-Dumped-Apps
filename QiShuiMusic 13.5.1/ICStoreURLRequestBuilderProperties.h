@interface ICStoreURLRequestBuilderProperties : NSObject
@property (nonatomic) NSString iCloudPersonID;
@property (nonatomic) ICURLBag URLBag;
@property (nonatomic) NSNumber DSID;
@property (nonatomic) NSString storefrontIdentifier;
@property (nonatomic) NSNumber delegatedDSID;
@property (nonatomic) NSString delegatedStorefrontIdentifier;
@property (nonatomic) ICDelegateToken delegateToken;
@property (nonatomic) ICURLBag delegatedURLBag;
- (id)URLBag;
- (id)DSID;
- (void)setDSID:;
- (id)delegateToken;
- (id)iCloudPersonID;
- (void)setURLBag:;
- (void)setICloudPersonID:;
- (void)setDelegatedStorefrontIdentifier:;
- (id)delegatedDSID;
- (void)setDelegatedURLBag:;
- (void)setDelegatedDSID:;
- (void)setStorefrontIdentifier:;
- (void)setDelegateToken:;
- (id)delegatedStorefrontIdentifier;
- (void).cxx_destruct;
- (id)storefrontIdentifier;
- (id)delegatedURLBag;
@end
