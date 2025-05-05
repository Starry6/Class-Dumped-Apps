@interface CPLUnionEnumerator : NSObject
- (unsigned long long)countByEnumeratingWithState:objects:count:;
- (void).cxx_destruct;
- (id)initWithEnumerators:;
- (id)initWithEnumeratorGenerators:;
- (void)_prepareNextEnumeratorWithState:;
@end
