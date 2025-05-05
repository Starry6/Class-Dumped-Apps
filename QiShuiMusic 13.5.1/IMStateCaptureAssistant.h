@interface IMStateCaptureAssistant : NSObject
@property (nonatomic) Q handle;
- (void)dealloc;
- (unsigned long long)handle;
- (void)setHandle:;
- (void)deregister;
- (id)initWithObject:title:queue:;
+ (unsigned long long)registerStateCaptureBlockWithObject:title:queue:;
@end
