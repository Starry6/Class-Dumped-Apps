@interface NSDictionaryMapNode : NSStoreMapNode
- (id)valueForKey:;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithValues:objectID:;
+ (BOOL)supportsSecureCoding;
@end
