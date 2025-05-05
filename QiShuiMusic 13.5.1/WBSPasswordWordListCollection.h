@interface WBSPasswordWordListCollection : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)addWordList:;
- (void)enumerateEntriesForString:withBlock:;
- (id)entriesForString:;
+ (id)commonPasswordWordListCollection;
+ (id)commonPasscodeWordListCollection;
@end
