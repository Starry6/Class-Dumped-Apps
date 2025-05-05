@interface NSObserverKeyPath : NSBoundKeyPath
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_receiveBox:;
- (void)finishObserving;
- (id)description;
- (void)setObservation:;
@end
