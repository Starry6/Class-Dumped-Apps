@interface WBSCyclerModifyTabOperation : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)executeWithContext:completionHandler:;
- (void)_modifyRandomTabInTabGroup:withContext:completionHandler:;
- (void)_updateTitleOfTab:withContext:completionHandler:;
- (void)_updateURLOfTab:withContext:completionHandler:;
- (void)_modifyRandomTabGroupWithContext:completionHandler:;
@end
