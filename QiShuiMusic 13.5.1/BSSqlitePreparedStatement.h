@interface BSSqlitePreparedStatement : NSObject
- (id)init;
- (void)dealloc;
- (BOOL)executeWithBindings:resultRowHandler:error:;
- (void).cxx_destruct;
@end
