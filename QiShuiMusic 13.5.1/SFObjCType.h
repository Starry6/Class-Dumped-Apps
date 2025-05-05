@interface SFObjCType : NSObject
@property (nonatomic) q code;
@property (nonatomic) NSString encoding;
@property (nonatomic) NSString name;
@property (nonatomic) NSString className;
@property (nonatomic) Q size;
@property (nonatomic) Q flags;
@property (nonatomic) BOOL number;
@property (nonatomic) BOOL integerNumber;
@property (nonatomic) BOOL floatingPointNumber;
@property (nonatomic) BOOL object;
- (id)className;
- (id)encoding;
- (long long)code;
- (BOOL)isNumber;
- (BOOL)isIntegerNumber;
- (BOOL)isObject;
- (void).cxx_destruct;
- (void)getBytes:forObject:;
- (id)name;
- (unsigned long long)flags;
- (id)objectWithBytes:;
- (BOOL)isFloatingPointNumber;
- (id)initWithCode:encoding:name:className:size:flags:;
- (unsigned long long)size;
+ (id)typeForValue:;
+ (id)typeForEncoding:;
@end
