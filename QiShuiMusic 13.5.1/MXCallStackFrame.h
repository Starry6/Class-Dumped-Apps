@interface MXCallStackFrame : NSObject
@property (nonatomic) NSString binaryName;
@property (nonatomic) NSNumber address;
@property (nonatomic) NSUUID binaryUUID;
@property (nonatomic) NSNumber offsetInBinary;
@property (nonatomic) NSNumber sampleCount;
@property (nonatomic) NSArray subFrames;
- (id)sampleCount;
- (id)toDictionary;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)address;
- (id)binaryName;
- (id)initWithBinaryName:binaryUUID:address:binaryOffset:sampleCount:withDepth:subFrameArray:;
- (id)binaryUUID;
- (id)offsetInBinary;
- (id)subFrames;
- (void)setSubFrames:;
+ (BOOL)supportsSecureCoding;
@end
