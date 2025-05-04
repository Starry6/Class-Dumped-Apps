@interface AWEVideoImageGenerator : NSObject
@property (nonatomic) q taskIdentifier;
- (void)requestImages:effect:index:step:size:array:editService:oneByOneImageBlock:completion:;
- (void)requestImages:effect:index:startTime:step:size:array:editService:oneByOneImageBlock:completion:;
- (void)p_invalidateCurrentTask;
- (void)p_requestImages:effect:index:startTime:step:size:array:editService:taskIdentifier:oneByOneImageBlock:completion:;
- (long long)taskIdentifier;
- (void)cancel;
- (void)setTaskIdentifier:;
@end
