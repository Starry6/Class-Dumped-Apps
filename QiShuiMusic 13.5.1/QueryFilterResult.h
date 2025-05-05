@interface QueryFilterResult : NSObject
@property (nonatomic) NSMutableIndexSet removingIndexSet;
@property (nonatomic) NSMutableIndexSet queryEncryptIndexSet;
@property (nonatomic) BOOL bodyEncryptEnabled;
- (BOOL)bodyEncryptEnabled;
- (id)queryEncryptIndexSet;
- (id)removingIndexSet;
- (void)setBodyEncryptEnabled:;
- (void)setQueryEncryptIndexSet:;
- (void)setRemovingIndexSet:;
- (void).cxx_destruct;
@end
