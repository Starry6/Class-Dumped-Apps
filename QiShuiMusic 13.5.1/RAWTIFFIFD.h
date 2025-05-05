@interface RAWTIFFIFD : NSObject
@property (nonatomic) NSMutableDictionary mTagsByID;
@property (nonatomic) NSMutableDictionary mTagsByName;
@property (nonatomic) NSDictionary mNamespace;
@property (nonatomic) NSDictionary mNamespaceReverse;
- (id)objectAtIndexedSubscript:;
- (void)setObject:atIndexedSubscript:;
- (void)setObject:forKeyedSubscript:;
- (id)objectForKeyedSubscript:;
- (void).cxx_destruct;
- (id)initWithNamespace:reverseNamespace:;
- (void)dumpObjCInfoKey:value:indent:;
- (void)dumpMemoryInfoKey:indent:;
- (id)mTagsByID;
- (void)setMTagsByID:;
- (id)mTagsByName;
- (void)setMTagsByName:;
- (id)mNamespace;
- (void)setMNamespace:;
- (id)mNamespaceReverse;
- (void)setMNamespaceReverse:;
@end
