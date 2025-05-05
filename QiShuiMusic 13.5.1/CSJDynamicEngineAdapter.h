@interface CSJDynamicEngineAdapter : NSObject
@property (nonatomic) CSJDynamicViewGlobalModel globalModel;
- (id)version_log_key;
- (id)beginAnalysisUserInfo;
- (long long)componentNotExistErrorCode;
- (id)dynamic_sub_analysis_end;
- (id)dynamic_sub_analysis_start;
- (id)dynamic_sub_render_end;
- (id)dynamic_sub_render_start;
- (id)layoutInfoWithUserInfo:error:;
- (void).cxx_destruct;
- (id)globalModel;
- (void)setGlobalModel:;
+ (id)dynamicEngineAdapterWithDynamicEnginVersion:globalModel:;
@end
