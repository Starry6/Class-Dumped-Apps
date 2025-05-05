@interface BDXBridgeLynxAuthSettings : MTLModel
@property (nonatomic) Q signVerifyMode;
@property (nonatomic) BOOL enableJsbAuth;
@property (nonatomic) BOOL enablejsbCallLimit;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)enableJsbAuth;
- (BOOL)enablejsbCallLimit;
- (void)setEnableJsbAuth:;
- (void)setEnablejsbCallLimit:;
- (void)setSignVerifyMode:;
- (unsigned long long)signVerifyMode;
+ (id)JSONKeyPathsByPropertyKey;
@end
