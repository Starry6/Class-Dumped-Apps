@interface WBSCyclerMoveTabOperation : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)executeWithContext:completionHandler:;
- (id)_randomTabGroupInContext:requireTabs:notIntersecting:;
@end
