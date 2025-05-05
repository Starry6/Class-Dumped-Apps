@interface CHTextCorrectionResult : NSObject
@property (nonatomic) CHTextInputTarget inputTarget;
@property (nonatomic) {_NSRange=QQ} affectedRange;
@property (nonatomic) CHTokenizedTextResult textResult;
@property (nonatomic) q resultType;
@property (nonatomic) BOOL characterLevel;
@property (nonatomic) NSError error;
- (id)error;
- (id)initWithCoder:;
- (long long)resultType;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)affectedRange;
- (id)textResult;
- (id)inputTarget;
- (BOOL)isCharacterLevel;
- (id)initWithInputTarget:affectedRange:textResult:resultType:isCharacterLevel:error:;
- (BOOL)isEqualToTextCorrectionResult:;
+ (BOOL)supportsSecureCoding;
@end
