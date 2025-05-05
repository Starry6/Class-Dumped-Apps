@interface WBSCyclerDeleteTabOperation : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)executeWithContext:completionHandler:;
- (void)_deleteRandomTabFromTabGroup:withContext:completionHandler:;
- (void)_deleteRandomTabGroupWithContext:completionHandler:;
- (void)_deleteItemWithIdentifier:inContext:completionHandler:;
@end
