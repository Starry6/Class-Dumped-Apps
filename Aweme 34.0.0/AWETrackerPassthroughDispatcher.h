@interface AWETrackerPassthroughDispatcher : NSObject
+ (void)addTrackerDeallocCallbackTo:with:;
+ (id)aspectForEvent:block:;
+ (id)applyAspectsForEvent:context:;
+ (id)transmissionNodeInfoForEvent:withBlock:;
+ (id)transmissionNodeInfoForEvent:withParams:;
+ (id)applyTransmissionForEvent:forObject:;
+ (id)applyTransmissionForEvent:forObject:trackerContext:;
+ (id)transmissionChainForEvent:forObject:;
+ (id)applyTransmissionWithChain:trackerContext:;
+ (id)applyTrackerPassthroughForEvent:config:;
+ (void)collectAllAspects;
@end
