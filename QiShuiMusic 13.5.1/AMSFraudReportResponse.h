@interface AMSFraudReportResponse : NSObject
@property (nonatomic) NSString nameSpace;
@property (nonatomic) q reportedScore;
@property (nonatomic) q newScore;
@property (nonatomic) NSString proof;
@property (nonatomic) NSString evaluatedElement;
@property (nonatomic) NSString finalizedElement;
@property (nonatomic) NSString keyID;
- (void)setNameSpace:;
- (id)nameSpace;
- (void)setKeyID:;
- (id)keyID;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithURLResult:keyID:;
- (id)initWithDictionary:keyID:;
- (long long)reportedScore;
- (void)setReportedScore:;
- (long long)newScore;
- (void)setNewScore:;
- (id)proof;
- (void)setProof:;
- (id)evaluatedElement;
- (void)setEvaluatedElement:;
- (id)finalizedElement;
- (void)setFinalizedElement:;
+ (BOOL)supportsSecureCoding;
@end
