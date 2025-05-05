@interface CKPackageDBDelegate : NSObject
@property (nonatomic) NSInteger userVersion;
- (int)userVersion;
- (BOOL)migrateDatabase:fromVersion:;
@end
