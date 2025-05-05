@interface CoreDAVMoveTask : CoreDAVCopyOrMoveTask
@property (nonatomic) <CoreDAVMoveTaskDelegate> delegate;
@property (nonatomic) NSString previousETag;
- (void)dealloc;
- (id)httpMethod;
- (void)setPreviousETag:;
- (id)additionalHeaderValues;
- (void).cxx_destruct;
- (id)description;
- (id)previousETag;
- (void)_callBackToDelegateWithResponses:error:;
@end
