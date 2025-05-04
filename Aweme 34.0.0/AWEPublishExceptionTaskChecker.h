@interface AWEPublishExceptionTaskChecker : NSObject
@property (nonatomic) AWEVideoPublishViewModel publishModel;
@property (nonatomic) AWEPublishExceptionTaskContext taskContext;
@property (nonatomic) NSString exceptionMsg;
@property (nonatomic) double stopDuration;
@property (nonatomic) q checkType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)publishModel;
- (void)setPublishModel:;
- (id)videoSourceTrackInfoWithPublishModel:;
- (void)checkWithPublishModel:context:completion:;
- (id)reportCustomParams;
- (void)setTaskContext:;
- (void)setExceptionMsg:;
- (void)setStopDuration:;
- (id)exceptionMsg;
- (double)stopDuration;
- (id)taskContext;
- (void).cxx_destruct;
- (long long)checkType;
- (void)setCheckType:;
@end
