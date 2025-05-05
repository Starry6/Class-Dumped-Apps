@interface VSTrie : NSObject
@property (nonatomic) VSTrieNode root;
- (id)init;
- (id)root;
- (void).cxx_destruct;
- (void)setRoot:;
- (void)insertString:withAssociatedObject:;
- (id)objectsMatchingPrefix:;
@end
