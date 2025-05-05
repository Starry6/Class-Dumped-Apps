@interface WBSCyclerModifyBookmarkOperation : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)executeWithContext:completionHandler:;
- (void)_changeTitleOfBookmark:withContext:completionHandler:;
- (void)_changeURLOfBookmark:withContext:completionHandler:;
@end
