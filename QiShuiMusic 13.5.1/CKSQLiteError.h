@interface CKSQLiteError : CKInternalError
@property (nonatomic) NSInteger sqliteCode;
@property (nonatomic) NSInteger sqliteExtendedCode;
@property (nonatomic) BOOL databaseIsCorrupt;
- (int)sqliteCode;
- (int)sqliteExtendedCode;
- (BOOL)CK_isCKSQLiteError;
- (BOOL)databaseIsCorrupt;
- (id)description;
+ (BOOL)isNoUniqueRowError:;
+ (BOOL)isNoMatchingRowError:;
+ (id)errorForSQLite:message:;
+ (BOOL)isConstraintError:;
+ (id)testErrorWithDatabaseCorruption;
+ (BOOL)isUniqueConstraintError:;
+ (id)errorForSQLite:message:args:;
@end
