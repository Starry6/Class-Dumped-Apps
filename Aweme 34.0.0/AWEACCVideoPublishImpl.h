@interface AWEACCVideoPublishImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)hasTaskExecuting;
- (void)startMusicReplaceForVideoWithPublishModel:;
- (long long)publishTaskCount;
- (id)uploadClientOptParams;
@end
