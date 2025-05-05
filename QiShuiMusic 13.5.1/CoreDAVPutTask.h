@interface CoreDAVPutTask : CoreDAVPostOrPutTask
@property (nonatomic) NSString nextETag;
@property (nonatomic) <CoreDAVTaskDelegate> delegate;
- (id)httpMethod;
- (void)finishCoreDAVTaskWithError:;
- (void).cxx_destruct;
- (id)description;
- (id)nextETag;
- (void)setNextETag:;
@end
