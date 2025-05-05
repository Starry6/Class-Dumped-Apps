@interface SSVRepairApplicationRequest : SSRequest
@property (nonatomic) NSString bundleID;
@property (nonatomic) NSNumber accountDSID;
@property (nonatomic) q claimStyle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (id)copyXPCEncoding;
- (id)accountDSID;
- (void).cxx_destruct;
- (id)bundleID;
- (id)initWithBundleID:accountIdentifier:claimStyle:;
- (long long)claimStyle;
- (void)startWithResponseBlock:;
@end
