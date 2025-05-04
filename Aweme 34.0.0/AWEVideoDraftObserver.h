@interface AWEVideoDraftObserver : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)draftHasTransitionedNormalByUserWithDraftId:launchFrom:extraInfo:;
- (void)recordDraftVisibleByUserWithId:launchFrom:;
- (void)removeRedundantDraftCopyed:extraInfo:;
- (void)clearNoteUnusedAIGCResultWithDraftId:;
- (id)init;
+ (id)sharedInstance;
@end
