@interface CMIExternalMemoryConfiguration : NSObject
@property (nonatomic) {?=ii} maxInputDimensions;
@property (nonatomic) I inputPixelFormat;
@property (nonatomic) {?=ii} maxOutputDimensions;
@property (nonatomic) NSDictionary processorSpecificOptions;
- (void).cxx_destruct;
- (id)description;
- (id)initWithMaxInputDimensions:inputPixelFormat:maxOutputDimensions:processorSpecificOptions:;
- (id)maxInputDimensions;
- (id)maxOutputDimensions;
- (unsigned int)inputPixelFormat;
- (id)processorSpecificOptions;
@end
