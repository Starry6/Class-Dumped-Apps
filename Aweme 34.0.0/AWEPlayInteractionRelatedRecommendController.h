@interface AWEPlayInteractionRelatedRecommendController : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)createPlainTextTailLabelWithAttributedText:;
- (id)expandTagFont;
- (id)calculateTruncationTokenWithContext:;
- (id)advanceParserDescriptionWithContext:;
- (id)setTruncationTokenIfNeedWithContext:;
@end
