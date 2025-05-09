@interface ConversionOptionSet : NSObject
@property (nonatomic) NSString conversionType;
@property (nonatomic) NSString sourcePath;
@property (nonatomic) NSString sourcePathVideoComplement;
@property (nonatomic) NSString destinationPath;
@property (nonatomic) NSString destinationPathVideoComplement;
@property (nonatomic) NSMutableArray conversionOptionInputKeyValuePairs;
@property (nonatomic) NSString presetName;
@property (nonatomic) q repeatCount;
@property (nonatomic) NSMutableDictionary conversionOptions;
@property (nonatomic) BOOL replaceExistingOutput;
@property (nonatomic) BOOL verbose;
- (long long)repeatCount;
- (void)setRepeatCount:;
- (id)init;
- (id)sourcePath;
- (void)setDestinationPath:;
- (id)destinationPath;
- (void).cxx_destruct;
- (void)setSourcePath:;
- (BOOL)verbose;
- (void)setVerbose:;
- (id)presetName;
- (id)conversionType;
- (void)setConversionType:;
- (void)setConversionOptions:;
- (id)conversionOptions;
- (int)validateAndProcess;
- (int)checkDestinationExists;
- (id)presetListForMapping:;
- (id)presetNameToOptionsMappingForVideoTranscoding;
- (id)presetNameToOptionsMappingForImageConversionOrVideoStillImageExtraction;
- (BOOL)processConversionOptionKey:valueString:;
- (double)scaleFactorForInputSize:sharedStreamsSizeSpecificationString:;
- (id)conversionOptionValueForString:valueType:;
- (id)arrayOfStringsForString:;
- (id)metadataPolicyForString:;
- (id)cmTimeRangeDictionaryForString:;
- (id)photosAdjustmentsDictionaryForString:;
- (id)sourcePathVideoComplement;
- (void)setSourcePathVideoComplement:;
- (id)destinationPathVideoComplement;
- (void)setDestinationPathVideoComplement:;
- (id)conversionOptionInputKeyValuePairs;
- (void)setConversionOptionInputKeyValuePairs:;
- (void)setPresetName:;
- (BOOL)replaceExistingOutput;
- (void)setReplaceExistingOutput:;
+ (id)knownConversionTypes;
+ (id)sizeForImageAtPath:;
@end
