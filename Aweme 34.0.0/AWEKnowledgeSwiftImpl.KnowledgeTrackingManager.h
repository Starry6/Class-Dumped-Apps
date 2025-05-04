@interface AWEKnowledgeSwiftImpl.KnowledgeTrackingManager : NSObject
- (id)init;
+ (id)customizedTrackingParamsWithReferString:model:;
+ (id)customizedTrackingParamsWithReferString:model:scene:extraInfo:;
+ (void)compareParamsWithPassthroughParams:knowledgeParams:eventName:passthroughChain:;
+ (id)customizedTrackingParamsWithReferString:model:scene:logExtra:;
+ (id)customizedTrackingParamsWithReferString:model:scene:;
@end
