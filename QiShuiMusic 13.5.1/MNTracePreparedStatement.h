@interface MNTracePreparedStatement : NSObject
- (BOOL)clearBindings;
- (BOOL)execute;
- (id)init;
- (void)dealloc;
- (BOOL)step;
- (id)debugDescription;
- (void)finalize;
- (BOOL)reset;
- (id)initForTrace:statement:outError:;
- (void)bind:int:;
- (void)bind:double:;
- (void)bind:string:;
- (void)bind:data:;
- (void)bindNull:;
- (BOOL)stepRow;
- (int)columnInt:;
- (double)columnDouble:;
- (id)columnString:;
- (id)columnData:;
- (id)columnObject:;
- (id)columnObjects:ofClasses:;
- (BOOL)_prepareStatementForTrace:statement:outError:;
+ (id)preparedStatementForTrace:statement:outError:;
@end
