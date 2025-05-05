@interface HMDTTMonitorFrequenceDetectInterceptor : NSObject
@property (nonatomic) <HMDTTMonitorInterceptor> nextInteceptor;
@property (nonatomic) HMDFrequenceDetectParam detectParam;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDetectParam:;
- (void)cleanStatisticData;
- (id)detectParam;
- (void)frequenceDetectParamDidChange:;
- (id)nextInteceptor;
- (void)reportDetectedResult:;
- (void)reportDetectedResultIfNeeded:;
- (void)setNextInteceptor:;
- (void)setNextInterceptor:;
- (void)setupParams;
- (BOOL)shouldHandleRequest:;
- (id)init;
- (void)dealloc;
- (void)handleRequest:;
- (void).cxx_destruct;
- (id).cxx_construct;
+ (id)globalQueue;
@end
