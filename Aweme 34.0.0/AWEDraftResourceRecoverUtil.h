@interface AWEDraftResourceRecoverUtil : NSObject
+ (id)componentClassesNeedsResourceRecover;
+ (void)p_regenerateTheNecessaryResourcesForPublishViewModel:tracer:errors:completion:;
+ (void)executeRecoverBlock:retry:completion:;
+ (void)p_updateRelatedResourcesFor:withPublishModel:group:completion:;
+ (void)p_updateViewModelsWithDownloadedEffects:publishViewModel:group:completion:;
+ (void)prepareDraftResourceForPublishViewModel:context:completion:;
@end
