@interface CLCppContainer : NSObject
@property (nonatomic) r^v cppObjectPtr;
@property (nonatomic) @? destructor;
@property (nonatomic) Q binaryVersion;
@property (nonatomic) Q sizeOfType;
- (unsigned long long)sizeOfType;
- (void)dealloc;
- (void)setCppObjectPtr:;
- (id)initWithObject:destructor:binaryVersion:typeSize:;
- (id)initWithCoder:;
- (void)setDestructor:;
- (void)encodeWithCoder:;
- (unsigned long long)binaryVersion;
- (void).cxx_destruct;
- (id)cppObjectPtr;
- (id)destructor;
- (void)invalidate;
+ (BOOL)supportsSecureCoding;
+ (id)containerWithObject:destructor:binaryVersion:typeSize:;
@end
