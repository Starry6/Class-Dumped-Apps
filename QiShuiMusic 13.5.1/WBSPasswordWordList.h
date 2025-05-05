@interface WBSPasswordWordList : NSObject
@property (nonatomic) NSString identifier;
- (id)identifier;
- (void).cxx_destruct;
- (id)initWithIdentifier:;
- (void)enumerateEntriesForString:withBlock:;
- (id)entriesForString:;
@end
