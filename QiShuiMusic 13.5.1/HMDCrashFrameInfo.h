@interface HMDCrashFrameInfo : NSObject
@property (nonatomic) Q addr;
@property (nonatomic) HMDCrashBinaryImage image;
@property (nonatomic) NSString symbolName;
@property (nonatomic) Q symbolAddress;
@property (nonatomic) BOOL symbolicated;
- (void)setSymbolAddress:;
- (void)setSymbolicated:;
- (unsigned long long)symbolAddress;
- (BOOL)symbolicated;
- (id)symbolName;
- (void)setImage:;
- (void)setSymbolName:;
- (void).cxx_destruct;
- (id)image;
- (unsigned long long)addr;
- (void)setAddr:;
+ (id)frameInfoWithAddr:imageLoader:;
@end
