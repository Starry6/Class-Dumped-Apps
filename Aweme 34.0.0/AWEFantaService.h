@interface AWEFantaService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)triggerUserAction2:forAwemeItem:;
- (id)featureSequenceForUploadChannel:requestContext:;
- (void)fantaFeatureInfoUpdateWith:info:;
- (void)registerDataCollectors;
- (void)registerFeatureSequences;
- (void)registerFeatureProducers;
- (BOOL)isFirstRequest:;
- (void)triggerUserAction:forAwemeItem:;
- (void)triggerTujiAction:forAwemeItem:;
@end
