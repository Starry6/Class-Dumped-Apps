@interface VCPVideoProcessorNode : NSObject
@property (nonatomic) VNRequest request;
@property (nonatomic) {?=qiIq} timeInterval;
@property (nonatomic) Q frameInterval;
- (unsigned long long)frameInterval;
- (id)request;
- (id)timeInterval;
- (void).cxx_destruct;
- (id)initWithRequest:andConfiguration:;
+ (BOOL)validateConfiguration:withError:;
+ (id)nodeWithRequest:andConfiguration:;
@end
