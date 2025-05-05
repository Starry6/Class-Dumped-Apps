@interface IESLiveTemplateEngineLogNode : NSObject
@property (nonatomic) NSMutableArray errors;
- (void)appendError:;
- (BOOL)containsError;
- (id)imagePieceErrors;
- (id)init;
- (void)setErrors:;
- (id)allErrors;
- (void).cxx_destruct;
- (id)errors;
@end
