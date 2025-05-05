@interface NSSQLConstantValueIntermediate : NSSQLIntermediate
- (id)initWithConstantValue:inScope:context:;
- (void)dealloc;
- (id)generateSQLStringInContext:;
- (id)initWithConstantValue:ofType:inScope:context:;
@end
