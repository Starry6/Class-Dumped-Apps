@interface INIntentTestResolvedParameter : NSObject
@property (nonatomic) INExtensionContextSlotResolutionResult extensionContextResolutionResult;
@property (nonatomic) INIntent intent;
@property (nonatomic) INIntentSlotDescription slotDescription;
@property (nonatomic) NSString parameter;
@property (nonatomic) NSArray results;
@property (nonatomic) BOOL resolveImplemented;
- (id)intent;
- (id)results;
- (id)descriptionAtIndent:;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (id)parameter;
- (id)initWithParameter:forIntent:extensionContextResolutionResult:;
- (BOOL)resolveImplemented;
- (id)extensionContextResolutionResult;
- (id)slotDescription;
@end
