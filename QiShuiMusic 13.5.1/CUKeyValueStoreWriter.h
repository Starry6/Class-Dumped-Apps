@interface CUKeyValueStoreWriter : NSObject
- (id)init;
- (void)cancel;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)startAtPath:error:;
- (BOOL)finishAndReturnError:;
- (BOOL)addKey:value:error:;
@end
