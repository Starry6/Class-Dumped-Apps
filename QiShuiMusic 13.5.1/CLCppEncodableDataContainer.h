@interface CLCppEncodableDataContainer : CLCppContainer
@property (nonatomic) NSData serialized;
@property (nonatomic) @ compatibilityInfo;
@property (nonatomic) @? encoder;
- (void)dealloc;
- (id)initWithObject:cppDataEncoder:destructor:binaryVersion:typeSize:;
- (void)setEncoder:;
- (id)encoder;
- (id)serialized;
- (void)setCompatibilityInfo:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setSerialized:;
- (id)compatibilityInfo;
+ (BOOL)supportsSecureCoding;
+ (id)containerWithObject:cppDataEncoder:destructor:binaryVersion:typeSize:;
@end
