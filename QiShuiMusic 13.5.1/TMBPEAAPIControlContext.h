@interface TMBPEAAPIControlContext : NSObject
@property (nonatomic) BDPrivacyCertValidateContext context;
@property (nonatomic) <BDPrivacyCertProtocol> cert;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)apiClass;
- (id)apiDataType;
- (id)apiMethod;
- (id)callToken;
- (id)rulerParams;
- (void)setCert:context:;
- (id)context;
- (void).cxx_destruct;
- (void)setContext:;
- (id)cert;
- (void)setCert:;
@end
