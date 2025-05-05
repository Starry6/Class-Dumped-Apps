@interface PHImportExceptionRecorder : NSObject
@property (nonatomic) NSMutableArray exceptions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
- (id)exceptions;
- (id)addExceptionWithType:path:underlyingError:file:line:;
- (void)addException:;
- (void)addExceptions:;
- (id)logForExceptions;
- (void)logErrors;
@end
