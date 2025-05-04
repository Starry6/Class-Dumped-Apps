@interface AWEFeedTimorPreloadHandler : NSObject
- (id)buildCustomParamsWithModel:;
- (BOOL)tryPreloadTimorForModel:referString:;
- (BOOL)tryPreloadADTimorForModel:referString:;
- (id)addDefaultXScreenConfigForSchema:;
@end
