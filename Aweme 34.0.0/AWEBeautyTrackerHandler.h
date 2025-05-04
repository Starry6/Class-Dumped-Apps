@interface AWEBeautyTrackerHandler : NSObject
- (id)p_generateBaseParamsDictWithPublishModel:;
- (id)trackParamsAppendNodeInfoWithParams:applyAllActionModels:;
- (id)trackParamsAppendLastNodeInfoWithParams:lastActionModels:;
- (id)nodeContentWithModels:;
- (id)nodeIdContentWithModels:;
- (id)nodeChildContentWithModels:;
- (id)nodeChildIdContentWithModels:;
- (id)nodeValueContentWithModels:;
- (id)nodeChildValueContentWithModels:;
- (void)trackCancelOrResetToastShowParamsWithType:repository:applyAllActionModels:;
- (void)trackCancelToastClickParamsWithType:isCancelStatus:repository:applyAllActionModels:;
- (void)trackExitBeautifyPanelParamsWithRepositoryUUID:applyAllActionModels:lastActionModels:isUseEditBeautifyStatus:isCancelStatus:isEqualStatus:isChangeStatus:;
- (id)trackParamsAppendLastNodeEditInfoWithParams:lastActionModels:styleId:styleName:;
- (id)trackParamsEditBeautifulInfoWithParams:lastActionModels:;
@end
