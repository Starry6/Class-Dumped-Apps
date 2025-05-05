@interface HMDMonitorCallbackObject : NSObject
@property (nonatomic) @? callBack;
@property (nonatomic) NSString moduleName;
- (id)callBack;
- (id)initWithModuleName:callBack:;
- (void)setCallBack:;
- (void)setModuleName:;
- (id)moduleName;
- (void).cxx_destruct;
@end
