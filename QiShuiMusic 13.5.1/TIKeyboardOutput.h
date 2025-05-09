@interface TIKeyboardOutput : NSObject
@property (nonatomic) TIKeyboardCandidate acceptedCandidate;
@property (nonatomic) NSString textToCommit;
@property (nonatomic) BOOL unmarkIfNecessary;
@property (nonatomic) q positionOffset;
@property (nonatomic) Q deletionCount;
@property (nonatomic) NSString insertionText;
@property (nonatomic) Q forwardDeletionCount;
@property (nonatomic) NSString insertionTextAfterSelection;
@property (nonatomic) TIKeyboardCandidate shortcutConversion;
@property (nonatomic) NSIndexSet handwritingStrokesToDelete;
@property (nonatomic) BOOL shouldSendCurrentLocation;
@property (nonatomic) NSMutableDictionary customInfo;
- (void)copyTo:;
- (id)insertionText;
- (void)setInsertionText:;
- (void)deleteBackward;
- (long long)positionOffset;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)setPositionOffset:;
- (void)encodeWithCoder:;
- (void)insertText:;
- (void).cxx_destruct;
- (id)description;
- (void)insertTextAfterSelection:;
- (void)setCustomInfo:;
- (BOOL)isEqual:;
- (id)customInfo;
- (id)handwritingStrokesToDelete;
- (void)setShouldSendCurrentLocation:;
- (id)insertionTextAfterSelection;
- (BOOL)unmarkIfNecessary;
- (unsigned long long)forwardDeletionCount;
- (BOOL)shouldSendCurrentLocation;
- (id)acceptedCandidate;
- (id)shortcutConversion;
- (id)textToCommit;
- (void)setUnmarkIfNecessary:;
- (void)setAcceptedCandidate:;
- (void)setTextToCommit:;
- (void)setForwardDeletionCount:;
- (void)setInsertionTextAfterSelection:;
- (void)setShortcutConversion:;
- (void)setHandwritingStrokesToDelete:;
- (void)deleteBackward:;
- (void)deleteForward:;
- (unsigned long long)deletionCount;
- (void)setDeletionCount:;
- (void)deleteForward;
+ (BOOL)supportsSecureCoding;
@end
