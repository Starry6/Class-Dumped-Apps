@interface CoreDAVCopyOrMoveTask : CoreDAVTask
@property (nonatomic) NSInteger overwrite;
@property (nonatomic) NSURL destinationURL;
@property (nonatomic) NSURL priorOrderedURL;
- (id)requestBody;
- (id)initWithURL:;
- (void)setDestinationURL:;
- (void)finishCoreDAVTaskWithError:;
- (id)destinationURL;
- (id)additionalHeaderValues;
- (void).cxx_destruct;
- (id)description;
- (int)overwrite;
- (void)setOverwrite:;
- (id)initWithSourceURL:destinationURL:;
- (void)setPriorOrderedURL:;
- (id)priorOrderedURL;
- (id)initWithSourceURL:destinationURL:andOverwrite:;
- (void)_callBackToDelegateWithResponses:error:;
+ (id)stringFromOverwriteValue:;
@end
