@interface FRCMetalBase : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)initWithDevice:commmandQueue:;
- (id)createKernel:;
- (id)createKernel:constantValues:;
@end
