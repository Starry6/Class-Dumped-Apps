@interface VIEspressoRunner : NSObject
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithMLNetURL:expectedInputSize:imageInputName:outputNames:preferredMetalDevice:usesCPUOnly:;
- (void)set:error:;
- (id)processFrame:error:;
@end
