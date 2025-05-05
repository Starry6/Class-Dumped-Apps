@interface MADImageSafetyClassificationRequest : MADRequest
@property (nonatomic) NSString stagedText;
@property (nonatomic) NSString conversationIdentifier;
- (id)conversationIdentifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setConversationIdentifier:;
- (void).cxx_destruct;
- (id)description;
- (id)stagedText;
- (void)setStagedText:;
+ (BOOL)supportsSecureCoding;
@end
