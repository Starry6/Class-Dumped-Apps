@interface AWEUserWorkChangeController : AWEUserWorkController
@property (nonatomic) NSMutableSet addAwemeIDSet;
@property (nonatomic) NSMutableSet removedAwemeIDSet;
- (void)containerViewWillAppear:;
- (id)removedAwemeIDSet;
- (void)setRemovedAwemeIDSet:;
- (id)addAwemeIDSet;
- (void)dealRemoveWithAwemes:;
- (id)findRemovedAwemeModelsWith:;
- (void)addWithID:;
- (void)removeWithID:;
- (id)findAwemeModelIDWith:;
- (void)setAddAwemeIDSet:;
- (void)dealloc;
- (void).cxx_destruct;
@end
