@interface FilterNodeWrapper : NSObject
- (id)node;
- (void)dealloc;
- (id)initWithCoder:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (id)initWithFilterNode:;
+ (BOOL)supportsSecureCoding;
+ (id)wrapperWithFilterNode:;
@end
