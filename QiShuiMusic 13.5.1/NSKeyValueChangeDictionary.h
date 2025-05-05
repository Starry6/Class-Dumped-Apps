@interface NSKeyValueChangeDictionary : NSDictionary
- (void)dealloc;
- (id)keyEnumerator;
- (id)objectForKey:;
- (void)setDetailsNoCopy:originalObservable:;
- (void)setOriginalObservable:;
- (unsigned long long)count;
- (void)retainObjects;
- (id)initWithDetailsNoCopy:originalObservable:isPriorNotification:;
@end
