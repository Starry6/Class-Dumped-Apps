@interface FPMoveInfo : FPActionOperationInfo
@property (nonatomic) FPActionOperationLocator targetFolder;
@property (nonatomic) NSArray rootFilenames;
@property (nonatomic) Q lastUsedDatePolicy;
@property (nonatomic) BOOL shouldBounce;
@property (nonatomic) BOOL byCopy;
@property (nonatomic) BOOL byMoving;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)byCopy;
- (id)initWithOperationID:roots:rootFilenames:targetFolder:lastUsedDatePolicy:bounce:byCopy:;
- (BOOL)byMoving;
- (id)targetFolder;
- (void)setTargetFolder:;
- (id)rootFilenames;
- (void)setRootFilenames:;
- (unsigned long long)lastUsedDatePolicy;
- (void)setLastUsedDatePolicy:;
- (BOOL)shouldBounce;
- (void)setShouldBounce:;
- (void)setByCopy:;
+ (BOOL)supportsSecureCoding;
@end
