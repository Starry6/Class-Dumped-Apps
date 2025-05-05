@interface DESExceptionCatchingEvaluator : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)respondsToSelector:;
- (void).cxx_destruct;
- (id)evaluateRecipe:recordInfo:recordData:attachments:error:;
- (id)telemetryWithRecordSet:;
- (BOOL)shouldDownloadAttachmentWithURL:recipe:recordInfo:;
- (id)serverSafeRecordInfoWithRecordInfo:;
- (id)evaluateRecipe:matchingRecordSet:error:;
- (id)evaluateRecipe:matchingRecordSet:binaryResult:error:;
- (void)performEvaluation:;
- (id)initWithEvaluator:;
@end
