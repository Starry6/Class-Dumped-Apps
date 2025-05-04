@interface AWEVideoMergeTransParam : NSObject
@property (nonatomic) NSString identifier;
- (id)logTag;
- (void)configTransParam:withPublishViewModel:preview:videoData:transConfig:videoProcess:speedModel:completion:;
- (void)p_configTransParam:;
- (id)maxLimitResolution:;
- (void)p_fixEdgeTargetSizeIfNeed:withPublishModel:customSize:;
- (void)p_logVideoOutputSettings:withPublishModel:;
- (void)setIdentifier:;
- (id)identifier;
- (void).cxx_destruct;
+ (id)p_customVideoBitrate:;
+ (id)p_customVideoVideoSize:defaultSize:;
+ (id)merge;
+ (id)watermark;
@end
