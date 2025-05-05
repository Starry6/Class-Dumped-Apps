@interface CKDSObjCType : NSObject
@property (nonatomic) q code;
@property (nonatomic) Q size;
@property (nonatomic) NSString className;
- (id)className;
- (long long)code;
- (void).cxx_destruct;
- (unsigned long long)size;
+ (id)typeForValue:;
+ (id)typeForEncoding:;
@end
