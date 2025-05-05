@interface BSStackFrameInfo : NSObject
@property (nonatomic) Q address;
@property (nonatomic) NSString functionName;
@property (nonatomic) NSString executableName;
@property (nonatomic) NSString executablePath;
@property (nonatomic) NSString className;
- (id)executablePath;
- (id)executableName;
- (id)className;
- (id)functionName;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)address;
@end
