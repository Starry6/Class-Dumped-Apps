@interface BDTGREEPrivateKeyManager : BDTGPrivateKeyManager
- (void)getPrivateKeyDidFail;
- (void)getPrivateKeyDidSuccess:;
- (id)keyType;
+ (id)sharedInstance;
@end
