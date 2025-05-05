@interface CNAutocompleteCalendarQueryAssembler : NSObject
@property (nonatomic) CNObservable rawCachedObservable;
@property (nonatomic) CNObservable rawUncachedObservable;
@property (nonatomic) CNObservable cachedObservable;
@property (nonatomic) CNObservable uncachedObservable;
- (void).cxx_destruct;
- (id)description;
- (id)initWithRawCachedObservable:rawUncachedObservable:;
- (void)assemble;
- (id)cachedObservable;
- (id)uncachedObservable;
- (id)rawCachedObservable;
- (id)rawUncachedObservable;
@end
