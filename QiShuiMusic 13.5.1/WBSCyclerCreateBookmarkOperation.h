@interface WBSCyclerCreateBookmarkOperation : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)executeWithContext:completionHandler:;
- (id)_randomListWithContext:;
- (void)_createRandomListWithContext:completionHandler:;
- (void)_createRandomLeafWithContext:completionHandler:;
@end
