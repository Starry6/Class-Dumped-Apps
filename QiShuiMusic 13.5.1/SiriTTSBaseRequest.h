@interface SiriTTSBaseRequest : NSObject
@property (nonatomic) NSURL outputPath;
@property (nonatomic) @? didReportInstrument;
@property (nonatomic) NSString description;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)outputPath;
- (void)setOutputPath:;
- (id)didReportInstrument;
- (void)setDidReportInstrument:;
+ (BOOL)supportsSecureCoding;
@end
