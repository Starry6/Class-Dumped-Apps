@interface BDXSCCSecureCheckingConfig : MTLModel
@property (nonatomic) NSArray ignoreCheckingList;
@property (nonatomic) NSDictionary allowAndDenyList;
- (id)allowAndDenyList;
- (id)ignoreCheckingList;
- (void)setAllowAndDenyList:;
- (void)setIgnoreCheckingList:;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end
