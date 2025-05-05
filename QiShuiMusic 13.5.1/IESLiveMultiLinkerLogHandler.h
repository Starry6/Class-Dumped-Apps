@interface IESLiveMultiLinkerLogHandler : NSObject
@property (nonatomic) <IESLiveMultiLinkerProvider> provider;
- (id)linkerStatusStr;
- (void)didSetAttachingDIContext;
- (void)logErrorWithCategory:event:extra:;
- (void)logInfoWithCategory:event:extra:;
- (void)logWithLevel:category:event:extra:;
- (id)rtcStatusStr;
- (void)setProvider:;
- (id)provider;
- (void).cxx_destruct;
@end
