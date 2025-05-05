@interface WFWorkflowOutputRunResult : WFWorkflowRunResult
@property (nonatomic) NSData archivedOutput;
@property (nonatomic) WFContentCollection cachedOutput;
@property (nonatomic) BOOL hasOutput;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)hasOutput;
- (id)resultBySettingError:;
- (id)initWithOutput:;
- (id)initWithOutput:runError:;
- (void)getOutputWithCompletionHandler:;
- (id)unableToDecodeError;
- (id)generateRepresentationFromOutput:;
- (void)generateOutputFromRepresentation:withCompletion:;
- (id)archivedOutput;
- (id)cachedOutput;
- (void)setCachedOutput:;
+ (BOOL)supportsSecureCoding;
@end
