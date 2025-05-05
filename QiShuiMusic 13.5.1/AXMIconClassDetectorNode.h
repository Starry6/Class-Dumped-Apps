@interface AXMIconClassDetectorNode : AXMMobileAssetEvaluationNode
@property (nonatomic) iconclassification mlModel;
@property (nonatomic) NSArray iconClassLabels;
@property (nonatomic) BOOL writeDebugImage;
@property (nonatomic) NSString loggingName;
- (unsigned long long)minSupportedFormatVersion;
- (void).cxx_destruct;
- (id)loggingName;
- (unsigned long long)maxSupportedFormatVersion;
- (id)mobileAssetType;
- (void)evaluate:metrics:;
- (id)mlModelClasses;
- (id)modelResourceNames;
- (id)classLabelForIdx:;
- (void)_initializeClassLabels;
- (id)_localizedClassForClass:;
- (BOOL)writeDebugImage;
- (void)setWriteDebugImage:;
- (void)setLoggingName:;
- (id)iconClassLabels;
+ (BOOL)isSupported;
+ (BOOL)supportsSecureCoding;
+ (id)title;
@end
