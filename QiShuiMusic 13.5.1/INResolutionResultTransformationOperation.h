@interface INResolutionResultTransformationOperation : NSOperation
@property (nonatomic) <INIntentResolutionResultDataProviding> result;
@property (nonatomic) INIntent intent;
@property (nonatomic) INIntentSlotDescription intentSlotDescription;
@property (nonatomic) <INIntentParameterOptionsProviding> optionsProvider;
@property (nonatomic) @? returnBlock;
- (id)intent;
- (id)result;
- (void)start;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void).cxx_destruct;
- (id)initWithResult:intent:intentSlotDescription:optionsProvider:;
- (id)intentSlotDescription;
- (id)optionsProvider;
- (id)returnBlock;
- (void)setReturnBlock:;
@end
