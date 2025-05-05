@interface CVNLPCommSafetyTextAnalyzer : CVNLPModelBase
- (void).cxx_destruct;
- (id)processText:inConversationWithIdentifier:date:error:;
- (void)processConversationsWithStartDate:endDate:previousClassifications:progressHandler:completionHandler:;
- (id)initWithModelURL:options:;
- (long long)_classifyString:;
- (long long)classifyString:;
- (id)processText:inConversationWithIdentifier:startDate:endDate:error:;
- (id)_classificationForTextItems:conversationIdentifier:;
- (id)_classificationsForTextItems:previousClassifications:;
@end
