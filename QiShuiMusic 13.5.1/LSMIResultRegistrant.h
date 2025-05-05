@interface LSMIResultRegistrant : NSObject
- (void).cxx_destruct;
- (void)runWithCompletion:;
- (id)initWithContext:operationUUID:itemInfoDict:;
- (void)_replyWithError:onQueue:block:;
- (void)runPostProcessingForBundleID:success:isSystemApp:isPlaceholder:notificationJournaller:;
@end
