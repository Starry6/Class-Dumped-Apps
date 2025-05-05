@interface MSComposeAttachmentAnalyticController : NSObject
@property (nonatomic) MSDiagnosticManager diagnosticManager;
- (void).cxx_destruct;
- (id)initWithDiagnosticManager:totalDrawingsInsertedCount:;
- (void)sendMessageWithActualDrawingInsertCount:;
- (void)abandonMessageWithActualDrawingInsertCount:;
- (void)_submitFinalDrawingInsertCount:sentMessage:;
- (id)diagnosticManager;
- (void)setDiagnosticManager:;
@end
