@interface NSMetadataQueryResultGroup : NSObject
@property (nonatomic) NSString attribute;
@property (nonatomic) @ value;
@property (nonatomic) NSArray subgroups;
@property (nonatomic) Q resultCount;
@property (nonatomic) NSArray results;
- (void)dealloc;
- (id)attribute;
- (unsigned long long)resultCount;
- (id)results;
- (id)value;
- (id)resultAtIndex:;
- (id)_init:attributes:index:value:;
- (void)_addResult:;
- (id)subgroups;
- (void)_zapResultArray;
@end
