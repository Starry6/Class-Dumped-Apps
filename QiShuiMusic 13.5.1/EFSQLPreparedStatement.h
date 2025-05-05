@interface EFSQLPreparedStatement : NSObject
@property (nonatomic) BOOL isFinalized;
@property (nonatomic) NSString originalString;
@property (nonatomic) ^{sqlite3_stmt=} compiled;
@property (nonatomic) double allowedExecutionTime;
- (id)originalString;
- (void)dealloc;
- (BOOL)executeWithNamedBindings:rowsChanged:error:;
- (BOOL)clearBindingsWithError:;
- (BOOL)executeWithIndexedBindings:usingBlock:error:;
- (id)compiled;
- (BOOL)executeUsingBlock:error:;
- (id)debugDescription;
- (double)allowedExecutionTime;
- (BOOL)isFinalized;
- (void)setAllowedExecutionTime:;
- (BOOL)resetWithError:;
- (id)initWithString:connection:;
- (BOOL)finalizeWithError:;
- (BOOL)executeWithNamedBindings:usingBlock:error:;
+ (id)log;
@end
