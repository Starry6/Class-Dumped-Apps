@interface TITypologyRecordPhraseBoundaryAdjustment : TITypologyRecord
@property (nonatomic) BOOL forwardAdjustment;
@property (nonatomic) NSInteger granularity;
@property (nonatomic) TIKeyboardState keyboardState;
@property (nonatomic) TIKeyboardConfiguration keyboardConfig;
- (id)keyboardState;
- (id)shortDescription;
- (void)replaceDocumentState:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)keyboardConfig;
- (void)removeContextFromKeyboardState;
- (void)setKeyboardState:;
- (void)setKeyboardConfig:;
- (int)granularity;
- (void)applyToStatistic:;
- (void)setGranularity:;
- (id)currentKeyboardState;
- (BOOL)forwardAdjustment;
- (void)setForwardAdjustment:;
+ (BOOL)supportsSecureCoding;
@end
