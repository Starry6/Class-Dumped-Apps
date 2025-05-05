@interface PDFPageEvaluator : NSObject
@property (nonatomic) BOOL candidateForOCR;
@property (nonatomic) ^{CGPDFContentStream=} contentStream;
@property (nonatomic) ^{CGPDFRState=} rstate;
- (void)dealloc;
- (id)initWithParent:;
- (id)initWithPage:;
- (id)initWithParent:stream:resources:;
- (BOOL)isCandidateForOCR;
- (void)failCandidateForOCR:;
- (void)op_q:;
- (void)op_Q:;
- (void)op_cm:;
- (void)op_Tj:;
- (void)op_TJ:;
- (void)op_singlequote:;
- (void)op_doublequote:;
- (void)op_Do:;
- (void)setCandidateForOCR:;
- (id)contentStream;
- (id)rstate;
+ (void)isPageCandidateForOCR:completion:;
+ (BOOL)isPageCandidateForOCR:;
+ (id)createOperatorTable;
+ (id)asyncWorkQueue;
@end
