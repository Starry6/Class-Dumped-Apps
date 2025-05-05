@interface CompilationResult : NSObject
@property (nonatomic) <MTLFunction> function;
@property (nonatomic) NSError error;
- (id)init;
- (void)dealloc;
- (id)function;
- (id)error;
- (id)completionHandler;
- (id)initWithFunction:error:;
@end
