@interface AWERecorderDraftEntranceHelperImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isContainingRecorder:;
- (void)createNewRecorderAfterFinishingOldCreation:oldPublishModel:preCompletion:;
- (BOOL)shouldStayInRecorderAfterSavingDraft:;
@end
