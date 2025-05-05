@interface MFOutgoingRichtextMessageContent : MFOutgoingMessageContent
@property (nonatomic) BOOL textPartsAreHTML;
@property (nonatomic) MFPlainTextDocument plaintextAlternative;
@property (nonatomic) NSArray mixedContent;
- (id)copy;
- (void).cxx_destruct;
- (id)richtextContent;
- (BOOL)textPartsAreHTML;
- (void)setTextPartsAreHTML:;
- (id)plaintextAlternative;
- (void)setPlaintextAlternative:;
- (id)mixedContent;
- (void)setMixedContent:;
@end
