@interface OspreyKeychain : NSObject
- (id)createKeychainQuery;
- (BOOL)saveData:withIdentifier:;
- (id)fetchDataWithIdentifier:;
- (BOOL)deleteDataWithIdentifier:;
@end
