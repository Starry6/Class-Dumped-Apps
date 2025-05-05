@interface NSObservableKeyPath : NSBoundKeyPath
@property (nonatomic) <NSObservable> changes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)_wantsChanges;
- (id)addObserver:;
- (void)removeObservation:;
- (id)changes;
- (id)description;
@end
