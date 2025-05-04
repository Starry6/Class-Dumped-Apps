@interface AWEIMSmartAssistantAnswerGetResponse : AWEBaseApiModel
@property (nonatomic) NSArray suggestMessages;
@property (nonatomic) q recommendID;
- (long long)recommendID;
- (void)setRecommendID:;
- (id)suggestMessages;
- (void)setSuggestMessages:;
- (void).cxx_destruct;
+ (id)suggestMessagesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
