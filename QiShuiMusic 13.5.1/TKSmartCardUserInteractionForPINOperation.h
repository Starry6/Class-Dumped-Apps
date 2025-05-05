@interface TKSmartCardUserInteractionForPINOperation : TKSmartCardUserInteraction
@property (nonatomic) Q PINCompletion;
@property (nonatomic) NSArray PINMessageIndices;
@property (nonatomic) NSLocale locale;
@property (nonatomic) S resultSW;
@property (nonatomic) NSData resultData;
- (void)setLocale:;
- (id)init;
- (id)locale;
- (id)resultData;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setResultData:;
- (unsigned long long)PINCompletion;
- (void)setPINCompletion:;
- (id)PINMessageIndices;
- (void)setPINMessageIndices:;
- (unsigned short)resultSW;
- (void)setResultSW:;
+ (BOOL)supportsSecureCoding;
@end
