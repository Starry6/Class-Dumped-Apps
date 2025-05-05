@interface FigCaptureFlatPlistArray : NSArray
- (void)dealloc;
- (id)objectAtIndex:;
- (id)initWithFlatPlist:offset:;
- (unsigned long long)count;
@end
