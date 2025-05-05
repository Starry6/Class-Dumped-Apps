@interface HMDModuleCallbackPair : NSObject
@property (nonatomic) NSString moduleName;
@property (nonatomic) @? callback;
- (id)initWithModuleName:callback:;
- (void)invokeCallbackWithModule:isWorking:;
- (void)setModuleName:;
- (id)callback;
- (void)setCallback:;
- (unsigned long long)hash;
- (id)moduleName;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
