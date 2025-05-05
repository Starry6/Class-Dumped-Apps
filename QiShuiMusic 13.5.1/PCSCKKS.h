@interface PCSCKKS : NSObject
@property (nonatomic) ^{_PCSIdentitySetData=} set;
@property (nonatomic) NSString dsid;
- (id)dsid;
- (void)dealloc;
- (void)setDsid:;
- (id)set;
- (void).cxx_destruct;
- (void)setSet:;
- (id)initWithIdentitySet:dsid:;
- (id)syncViewOperation:;
- (id)fetchCurrentOperation:;
- (id)ensurePCSFieldsOperation:;
- (id)createIdentityOperation:;
- (void)submitRequest:complete:;
- (BOOL)shouldRetryWithSync:;
- (void)createNewIdentity:roll:sync:complete:;
- (void)createIdentity:complete:;
- (id)stripOperationErrorIfPCSError:;
+ (BOOL)fetchWithTimeout:error:;
@end
