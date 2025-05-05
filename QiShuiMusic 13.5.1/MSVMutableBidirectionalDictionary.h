@interface MSVMutableBidirectionalDictionary : MSVBidirectionalDictionary
- (void)setObject:forKey:;
- (id)initWithDictionary:;
- (void)removeAllObjects;
- (void)removeObjectForKey:;
- (void)removeKeyForObject:;
- (void)setKey:forObject:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
