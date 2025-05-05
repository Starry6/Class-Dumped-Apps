@interface CoreDAVCopyTask : CoreDAVCopyOrMoveTask
@property (nonatomic) <CoreDAVCopyTaskDelegate> delegate;
- (void)dealloc;
- (BOOL)validate:;
- (id)httpMethod;
- (void)_callBackToDelegateWithResponses:error:;
@end
