@interface TRIEvaluationStatus : NSObject
@property (nonatomic) C type;
@property (nonatomic) NSString evaluationId;
@property (nonatomic) NSDate date;
@property (nonatomic) TRIFactorsState evalState;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)date;
- (void)encodeWithCoder:;
- (unsigned char)type;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)evaluationId;
- (id)initWithType:evaluationId:date:evalState:;
- (id)evalState;
+ (BOOL)supportsSecureCoding;
+ (id)defaultProvider;
+ (id)freshProvider;
@end
