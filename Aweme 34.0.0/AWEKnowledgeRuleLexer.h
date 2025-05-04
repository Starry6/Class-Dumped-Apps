@interface AWEKnowledgeRuleLexer : NSObject
@property (nonatomic) NSString input;
@property (nonatomic) Q position;
- (id)readIdentifier;
- (BOOL)isOperatorStart:;
- (id)readOperator;
- (BOOL)isOperatorPart:;
- (void)setInput:;
- (id)initWithInput:;
- (unsigned long long)position;
- (id)input;
- (void).cxx_destruct;
- (void)setPosition:;
- (id)readString;
- (id)tokenize;
- (id)readNumber;
@end
