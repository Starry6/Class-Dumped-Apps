@interface BMSQLColumnAccessSet : NSObject
@property (nonatomic) NSString table;
@property (nonatomic) NSSet columns;
- (id)columns;
- (id)init;
- (id)table;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithTable:columns:;
- (BOOL)checkTable:column:;
+ (id)new;
@end
