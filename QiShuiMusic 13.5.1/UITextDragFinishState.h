@interface UITextDragFinishState : NSObject
@property (nonatomic) BOOL dragTearoffOccured;
@property (nonatomic) {CGPoint=dd} location;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)location;
- (void)setLocation:;
- (BOOL)dragTearoffOccured;
- (void)setDragTearoffOccured:;
@end
