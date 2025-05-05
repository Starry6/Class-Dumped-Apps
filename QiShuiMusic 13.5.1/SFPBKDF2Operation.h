@interface SFPBKDF2Operation : NSObject
@property (nonatomic) <SFPseudoRandomFunction> pseudoRandomFunction;
@property (nonatomic) q iterationCount;
@property (nonatomic) NSData salt;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)initWithCoder:;
- (id)salt;
- (void)encodeWithCoder:;
- (void)setSalt:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (long long)iterationCount;
- (id)pseudoRandomFunction;
- (id)deriveKeyWithSpecifier:fromKeySource:error:;
- (id)initWithPseudoRandomFunction:iterationCount:salt:;
- (void)setIterationCount:;
- (void)setPseudoRandomFunction:;
+ (BOOL)supportsSecureCoding;
+ (long long)keySource;
+ (id)_randomSalt;
@end
