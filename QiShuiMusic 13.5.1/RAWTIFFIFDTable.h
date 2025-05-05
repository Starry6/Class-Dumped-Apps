@interface RAWTIFFIFDTable : NSObject
@property (nonatomic) @? mValueBlock;
@property (nonatomic) NSDictionary mNamespace;
@property (nonatomic) NSDictionary mNamespaceReverse;
- (id)objectAtIndexedSubscript:;
- (void)setObject:atIndexedSubscript:;
- (void)setObject:forKeyedSubscript:;
- (id)objectForKeyedSubscript:;
- (void).cxx_destruct;
- (id)mNamespace;
- (void)setMNamespace:;
- (id)mNamespaceReverse;
- (void)setMNamespaceReverse:;
- (id)initWithValueBlock:forwardNamespace:reverseNamespace:;
- (id)mValueBlock;
- (void)setMValueBlock:;
@end
