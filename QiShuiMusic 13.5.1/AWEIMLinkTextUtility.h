@interface AWEIMLinkTextUtility : NSObject
@property (nonatomic) NSString originText;
@property (nonatomic) NSArray templateArray;
@property (nonatomic) NSDictionary templateActions;
@property (nonatomic) NSString result;
@property (nonatomic) NSArray linkArray;
@property (nonatomic) NSString messageID;
- (void)analyzeForCompanyMessage;
- (void)analyzeForNoticeMessage;
- (void)analyzeForTextMessage;
- (id)initWithOriginCompanyText:templateActions:;
- (id)initWithOriginText:templateArray:;
- (id)linkArray;
- (id)originText;
- (void)p_matchPattern:storeInLinkArray:type:;
- (void)setLinkArray:;
- (void)setOriginText:;
- (void)setTemplateArray:;
- (id)templateArray;
- (id)result;
- (id)messageID;
- (void).cxx_destruct;
- (void)setMessageID:;
- (void)setResult:;
- (id)templateActions;
- (void)setTemplateActions:;
+ (id)assembleAttributedString:withTemplateArray:;
+ (BOOL)hasUnrecognizedActionWithTemplate:;
@end
