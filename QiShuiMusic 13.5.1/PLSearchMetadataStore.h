@interface PLSearchMetadataStore : NSObject
- (id)currentSearchMetadata;
- (void).cxx_destruct;
- (void)updateSearchMetadataTo:;
- (id)initWithPath:;
- (void)deleteStore;
@end
