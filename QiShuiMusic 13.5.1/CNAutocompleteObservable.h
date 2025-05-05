@interface CNAutocompleteObservable : CNObservable
@property (nonatomic) CNObservable observable;
@property (nonatomic) NSString debugDescription;
- (id)observable;
- (id)subscribe:;
- (id)initWithBlock:;
- (id)debugDescription;
- (void)setObservable:;
- (void).cxx_destruct;
- (void)setDebugDescription:;
@end
