@interface CNEither : NSObject
@property (nonatomic) CNPair pair;
@property (nonatomic) BOOL isLeft;
@property (nonatomic) BOOL isRight;
@property (nonatomic) @ left;
@property (nonatomic) @ right;
- (BOOL)isLeft;
- (id)initWithCoder:;
- (id)left;
- (unsigned long long)hash;
- (BOOL)isRight;
- (void)encodeWithCoder:;
- (id)pair;
- (void).cxx_destruct;
- (id)right;
- (void)setPair:;
- (id)description;
- (id)initWithLeft:right:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)firstLeftInLazyChain:;
+ (id)eitherWithLeft:;
+ (id)eitherWithBool:error:;
+ (id)eitherWithRight:;
+ (id)eitherWithLeft:right:;
+ (id)eitherWithBlock:;
@end
