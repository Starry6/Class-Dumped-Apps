@interface CALayerArray : NSArray
- (void)getObjects:range:;
- (void)dealloc;
- (unsigned long long)countByEnumeratingWithState:objects:count:;
- (id)initWithLayers:count:retain:;
- (id)objectAtIndex:;
- (id)mutableCopyWithZone:;
- (unsigned long long)count;
- (void)getObjects:;
- (id)copyWithZone:;
@end
