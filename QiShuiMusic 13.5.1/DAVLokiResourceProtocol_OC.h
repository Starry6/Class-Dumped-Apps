@interface DAVLokiResourceProtocol_OC : DAVResourceProtocol_OC
- (id)buildURS;
- (id)getSourceFrom;
- (id)initWithEffectId:;
- (id)initWithResourceId:panel:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)getParameters;
+ (BOOL)isLokiResourceWithResourceId:;
@end
