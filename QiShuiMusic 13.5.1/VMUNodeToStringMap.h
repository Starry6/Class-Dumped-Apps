@interface VMUNodeToStringMap : NSObject
- (id)init;
- (void)dealloc;
- (void)enumerateHexAddressesInStrings:;
- (unsigned int)uniquedStringCount;
- (id)initWithCoder:;
- (void)setString:forNode:;
- (void)encodeWithCoder:;
- (unsigned int)_indexForString:;
- (void).cxx_destruct;
- (id)description;
- (id)stringForNode:;
- (unsigned int)count;
- (void)resymbolicate__NSMallocBlock__StringsWithGraph:;
+ (BOOL)supportsSecureCoding;
@end
