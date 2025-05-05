@interface MTLMessageFilter : NSObject
@property (nonatomic) <MTLDevice> device;
@property (nonatomic) Q messageType;
- (unsigned long long)messageType;
- (void)setDevice:;
- (id)device;
- (id)init:device:;
+ (id)filter:device:;
@end
