@interface CHContextualTextResult : NSObject
@property (nonatomic) CHTokenizedTextResult textResult;
@property (nonatomic) CHStrokeGroup strokeGroup;
@property (nonatomic) NSString terminatingSpecialCharacter;
- (void).cxx_destruct;
- (id)textResult;
- (id)strokeGroup;
- (void)setTextResult:;
- (id)initWithTextResult:terminatingSpecialCharacter:strokeGroup:;
- (void)setStrokeGroup:;
- (id)terminatingSpecialCharacter;
- (void)setTerminatingSpecialCharacter:;
+ (id)defaultWordTerminationCharacterForLocale:;
@end
