@interface UIDictationPhrase : NSObject
@property (nonatomic) q style;
@property (nonatomic) NSString text;
@property (nonatomic) NSArray alternativeInterpretations;
- (void)setStyle:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (long long)style;
- (id)text;
- (BOOL)isEqual:;
- (id)initWithText:alternativeInterpretations:style:;
- (id)alternativeInterpretations;
+ (BOOL)supportsSecureCoding;
+ (id)phraseWithText:alternativeInterpretations:;
+ (id)phraseWithText:alternativeInterpretations:style:;
@end
