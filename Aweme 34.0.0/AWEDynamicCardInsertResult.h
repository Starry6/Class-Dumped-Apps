@interface AWEDynamicCardInsertResult : MTLModel
@property (nonatomic) q expectedInsertPos;
@property (nonatomic) q realInsertPos;
@property (nonatomic) NSString failReason;
@property (nonatomic) BOOL success;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (void)setAwemeModel:;
- (long long)expectedInsertPos;
- (void)setExpectedInsertPos:;
- (long long)realInsertPos;
- (void)setRealInsertPos:;
- (id)init;
- (void)setSuccess:;
- (void).cxx_destruct;
- (BOOL)success;
- (id)failReason;
- (void)setFailReason:;
@end
