@interface NSSQLiteStatement : NSObject
- (id)entity;
- (void)dealloc;
- (id)sqlString;
- (id)bindVariables;
- (id)initWithEntity:sqlString:;
- (id)description;
- (id)bindIntarrays;
- (id)initWithEntity:;
@end
