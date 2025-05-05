@interface WebUndoStep : NSObject
- (void)dealloc;
- (id)step;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithUndoStep:;
+ (id)stepWithUndoStep:;
@end
