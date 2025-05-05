@interface FigCaptureFlatPlistDict : NSDictionary
- (void)dealloc;
- (id)keyEnumerator;
- (id)objectForKey:;
- (id)initWithFlatPlist:offset:;
- (unsigned long long)count;
@end
