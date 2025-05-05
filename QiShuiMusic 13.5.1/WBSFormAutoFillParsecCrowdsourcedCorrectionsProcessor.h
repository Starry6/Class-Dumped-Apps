@interface WBSFormAutoFillParsecCrowdsourcedCorrectionsProcessor : NSObject
- (void).cxx_destruct;
- (id)initWithCorrectionsStore:;
- (void)getLastCorrectionsRetrievalURLStringWithResultHandler:;
- (void)setCorrectionsWithJSONData:retrievalURLString:;
+ (id)_correctionsSchema;
+ (id)_schemaWithExpectedClass:errorCode:isOptional:;
+ (id)test_correctionsSchema;
@end
