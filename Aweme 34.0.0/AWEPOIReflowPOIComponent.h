@interface AWEPOIReflowPOIComponent : AWEPOIReflowResourceComponent
- (void)setupConfig:;
- (id)mergeGrouponAttributeParams:subPageURL:;
- (id)getHalfScreenParams:scene:;
- (id)getHalfScreenPerfConfig:;
- (id)getHalfScreenTrackParams:;
- (id)getHalfScreenGidInfo:;
- (id)getHalfScreenCommonTransInfo:;
- (id)getHalfScreenExtraLog:;
- (id)getLifeExtraLogInfo:;
- (id)hostPrefix;
- (BOOL)isLocalLifeReflowSchema:;
- (BOOL)switchRouterWithSchema:;
- (id)findPoiIDFromSchema:;
@end
