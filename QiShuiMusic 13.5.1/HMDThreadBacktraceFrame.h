@interface HMDThreadBacktraceFrame : NSObject
@property (nonatomic) Q stackIndex;
@property (nonatomic) Q address;
@property (nonatomic) Q imageAddress;
@property (nonatomic) NSString imageName;
@property (nonatomic) Q symbolAddress;
@property (nonatomic) NSString symbolName;
- (unsigned long long)imageAddress;
- (BOOL)isAppAddress;
- (void)setImageAddress:;
- (void)setStackIndex:;
- (void)setSymbolAddress:;
- (unsigned long long)stackIndex;
- (unsigned long long)symbolAddress;
- (BOOL)symbolicate:;
- (id)symbolName;
- (id)init;
- (void)setImageName:;
- (id)imageName;
- (id)jsonObject;
- (void)setAddress:;
- (void)setSymbolName:;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)address;
@end
