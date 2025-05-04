@interface AWEPOIReflowVideoComponent : AWEPOIReflowResourceComponent
- (void)setupConfig:;
- (id)hostPrefix;
- (BOOL)isLocalLifeReflowSchema:;
- (BOOL)switchRouterWithSchema:;
- (BOOL)needReplaceSchema:;
- (id)findVideoIDFromSchema:;
@end
