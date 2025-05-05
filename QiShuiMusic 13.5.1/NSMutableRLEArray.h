@interface NSMutableRLEArray : NSRLEArray
- (void)insertObject:range:;
- (void)deleteObjectsInRange:;
- (void)replaceObjectsInRange:withObject:length:;
- (void)_setBlockCapacity:;
- (id)copyWithZone:;
@end
