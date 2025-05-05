@interface AVFragmentedAssetsArray : NSArray
- (id)init;
- (void)dealloc;
- (id)objectAtIndex:;
- (unsigned long long)count;
- (id)initWithCount:firstSequenceNumber:;
@end
