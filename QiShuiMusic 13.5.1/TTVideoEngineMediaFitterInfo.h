@interface TTVideoEngineMediaFitterInfo : NSObject
@property (nonatomic) NSMutableArray functionParams;
@property (nonatomic) Q headerSize;
@property (nonatomic) Q duration;
@property (nonatomic) Q functionType;
- (unsigned long long)caclulateSizeDefaultFunc:;
- (unsigned long long)caclulateSizeFunc2:;
- (unsigned long long)calculateSizeBySecond:;
- (id)functionParams;
- (void)setFunctionParams:;
- (id)initWithDictionary:;
- (id)initWithCoder:;
- (void)setDuration:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (unsigned long long)functionType;
- (id)description;
- (unsigned long long)duration;
- (unsigned long long)headerSize;
- (void)setHeaderSize:;
- (void)setFunctionType:;
+ (BOOL)supportsSecureCoding;
@end
