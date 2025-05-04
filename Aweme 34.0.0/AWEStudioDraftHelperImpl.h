@interface AWEStudioDraftHelperImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)startWithDraft:isBackup:modifyPublishModelBlock:execute:;
- (id)generateAttachTextWithDuetChain:maxWidth:font:;
- (void)startWithDraft:isBackup:execute:;
- (void)tryMusicAgainWithDraft:modifyPublishModelBlock:execute:;
- (void)reshootWithInputData:execute:;
- (BOOL)enableManageDisk;
- (void)startMediumVideoDraftWithPublishModel:execute:;
- (void)startWithDraft:publishModel:publishModelError:execute:;
@end
