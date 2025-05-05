@interface TILexiconEntry : NSObject
@property (nonatomic) NSString documentText;
@property (nonatomic) NSString userInput;
- (id)documentText;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)userInput;
+ (BOOL)supportsSecureCoding;
+ (id)entryWithDocumentText:userInput:;
@end
