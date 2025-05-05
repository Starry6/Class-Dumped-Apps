@interface TITypologyRecord : NSObject
@property (nonatomic) double timestamp;
@property (nonatomic) NSUUID recordID;
- (id)init;
- (id)shortDescription;
- (id)textSummary;
- (void)replaceDocumentState:;
- (id)initWithCoder:;
- (void)setRecordID:;
- (void)encodeWithCoder:;
- (void)setTimestamp:;
- (id)recordID;
- (void).cxx_destruct;
- (void)removeContextFromKeyboardState;
- (double)timestamp;
- (void)applyToStatistic:;
- (id)currentKeyboardState;
- (id)changedText;
- (id)textSummaryForAutocorrection:;
+ (BOOL)supportsSecureCoding;
+ (id)recordClasses;
@end
