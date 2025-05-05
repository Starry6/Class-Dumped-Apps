@interface TMPrivacyAppLogReporter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canHandelEvent:;
- (id)handleAccessResultEvent:;
- (id)handlePasteboardReadEvent:;
- (id)handlePermissionRequestEvent:;
- (id)handleTimonPipelineAPMReportEvent:;
- (id)hanleEvent:;
- (id)uniqueId;
@end
