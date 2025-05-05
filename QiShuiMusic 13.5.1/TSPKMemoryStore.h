@interface TSPKMemoryStore : NSObject
@property (nonatomic) NSMutableDictionary valueDict;
@property (nonatomic) <TSPKLock> lock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)put:value:;
- (void)setValueDict:;
- (id)valueDict;
- (BOOL)containsKey:;
- (id)init;
- (id)lock;
- (id)get:;
- (void).cxx_destruct;
- (void)setLock:;
+ (id)sharedStore;
@end
