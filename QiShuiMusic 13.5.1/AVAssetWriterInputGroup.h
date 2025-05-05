@interface AVAssetWriterInputGroup : AVMediaSelectionGroup
@property (nonatomic) NSArray provisionalInputs;
@property (nonatomic) NSArray inputs;
@property (nonatomic) AVAssetWriterInput defaultInput;
- (id)inputs;
- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)options;
- (id)mediaSelectionOptionWithPropertyList:;
- (id)copyWithZone:;
- (id)defaultInput;
- (id)provisionalInputs;
- (id)initWithInputs:defaultInput:;
- (void)_startObservingInputPropertiesThatMayChangeValueOfOptions;
- (void)_stopObservingInputPropertiesThatMayChangeValueOfOptions;
- (id)initWithInputs:provisionalInputs:defaultInput:;
+ (id)assetWriterInputGroupWithInputs:defaultInput:;
+ (id)assetWriterInputGroupWithInputs:provisionalInputs:defaultInput:;
@end
