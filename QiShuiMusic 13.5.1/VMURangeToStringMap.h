@interface VMURangeToStringMap : NSObject
- (id)stringForIndex:;
- (id)rangeForString:startingAtAddress:;
- (id)init;
- (void)dealloc;
- (void)enumerateRanges:;
- (void)enumerateHexAddressesInStrings:;
- (unsigned int)uniquedStringCount;
- (id)stringForAddress:;
- (id)rangeContainingAddress:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)resymbolicateStringsWithSymbolicator:;
- (id)description;
- (void)setString:forRange:;
- (unsigned int)indexForString:insertIfMissing:;
- (void)sort;
- (unsigned int)count;
+ (BOOL)supportsSecureCoding;
@end
