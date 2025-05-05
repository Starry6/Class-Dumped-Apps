@interface FLEXBlockDescription : NSObject
@property (nonatomic) NSMethodSignature signature;
@property (nonatomic) NSString signatureString;
@property (nonatomic) NSString sourceDeclaration;
@property (nonatomic) Q flags;
@property (nonatomic) Q size;
@property (nonatomic) NSString summary;
@property (nonatomic) @ block;
- (id)initWithObjcBlock:;
- (BOOL)isCompatibleForBlockSwizzlingWithMethodSignature:;
- (id)buildLikelyDeclaration;
- (id)signature;
- (id)signatureString;
- (id)sourceDeclaration;
- (unsigned long long)flags;
- (unsigned long long)size;
- (id)summary;
- (id)block;
- (void).cxx_destruct;
+ (id)describing:;
@end
