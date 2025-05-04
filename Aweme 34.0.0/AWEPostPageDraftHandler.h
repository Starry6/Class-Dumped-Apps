@interface AWEPostPageDraftHandler : NSObject
@property (nonatomic) <AWEPostPageContext> context;
@property (nonatomic) NSNumber saveDraftStateSignal;
@property (nonatomic) <ACCSequenceEditServiceProtocol> sequenceEditService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)sequenceEditService;
- (void)setSequenceEditService:;
- (void)bindServices:;
- (void)saveDraft:;
- (BOOL)saveDraftIfNeed:;
- (void)saveDraft:needNotification:presaveHandler:completion:backup:;
- (void)saveDraft:backup:;
- (void)setSaveDraftStateSignal:;
- (void)savePollImageToDisk;
- (void)saveOrignalDraftWithCompletion:;
- (void)beginSaveDraft;
- (void)endSaveDraft;
- (id)saveDraftStateSignal;
- (void)viewDidLoad;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (void)initData;
- (void)deleteDraft;
@end
