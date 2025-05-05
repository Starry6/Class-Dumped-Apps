@interface BDUGLuckyDogExchangeUnionSchemaManager : NSObject
- (void)__handleURLWithParams:;
- (void)__requestTransferWithParams:;
- (void)__trackEventWithParams:;
- (id)__transferPath;
- (void)registerAscribeSchema;
+ (void)preStartupUnionSchemaModule;
+ (id)sharedInstance;
@end
