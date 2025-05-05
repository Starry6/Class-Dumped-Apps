@interface AWEIMShareResultModuleService : HTSService
@property (nonatomic) @? completion;
@property (nonatomic) @? selectingCompletion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)registerSelectingListWithCompletion:;
- (void)registerShareResultWithCompletion:;
- (id)selectingCompletion;
- (void)setSelectingCompletion:;
- (void)triggerSelectingList:text:isCancelled:createGroup:error:;
- (void)triggerShareResult:error:;
- (id)completion;
- (void)setCompletion:;
- (void).cxx_destruct;
@end
