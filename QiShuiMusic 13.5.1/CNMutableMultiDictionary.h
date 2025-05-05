@interface CNMutableMultiDictionary : CNMultiDictionary
- (void)addNonNilObject:forKey:;
- (void)addObject:forKey:;
- (void)setObjects:forKey:;
- (void)removeObject:forKey:;
- (void)removeObjectsForKey:;
- (id)copyWithZone:;
@end
