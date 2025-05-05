@interface CryptoKitPrivate.Scrypt : NSObject
- (id)init;
+ (id)deriveKeyWithPassword:salt:outputSize:cost:blockSize:parallelization:;
@end
