@interface TSTimeErrorSequence : NSObject
@property (nonatomic) NSArray timeErrors;
- (void).cxx_destruct;
- (id)timeErrors;
- (id)generatePythonScriptWithOutputPath:fileName:titleName:plotPath:showPlot:;
- (BOOL)exportTimeErrorsToDirectoryURL:;
- (BOOL)exportTimeErrorsToDirectoryURL:withFilename:;
- (id)initWithTimeErrors:;
+ (id)timeErrorSequenceWithTimestamps:timeError:count:;
@end
