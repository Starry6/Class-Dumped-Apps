@interface WBSCyclerCreateTabOperation : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)executeWithContext:completionHandler:;
- (void)_createRandomTabWithContext:completionHandler:;
- (void)_createRandomTabGroupWithContext:completionHandler:;
@end
