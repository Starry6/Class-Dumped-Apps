@interface LynxScrollFluency : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)scrollerDidEndDecelerating:;
- (void)scrollerDidEndDragging:willDecelerate:;
- (void)scrollerWillBeginDragging:;
@end
