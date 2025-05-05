@interface CFPDDataBuffer : NSObject
- (BOOL)purgable;
- (id)copyPropertyListWithMutability:error:;
- (id)bytes;
- (BOOL)beginAccessing;
- (id)copyXPCData;
- (BOOL)validatePlist;
- (void)endAccessing;
- (id)copyCFData;
- (void)quicklyValidatePlistAndOnFailureInvokeBlock:;
- (unsigned long long)length;
+ (id)newBufferFromCFData:;
+ (id)newBufferFromPropertyList:;
+ (id)newBufferFromFile:allowMappingIfSafe:;
@end
