@interface TRIClientFactorPackStreamingWriter : NSObject
- (BOOL)closeWithError:;
- (id)init;
- (BOOL)_streamExecWithError:block:;
- (void)appendFactorLevel:;
- (unsigned int)_fieldNumberForFieldName:;
- (void).cxx_destruct;
- (id)initWithPath:;
- (void)writeFactorPackId:;
- (void)writeSelectedNamespace:;
+ (BOOL)copySourceFactorPack:toDestPath:error:modifyFactorLevel:;
@end
