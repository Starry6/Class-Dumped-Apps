@interface PASampleTimeSeriesDataStore : NSObject
@property (nonatomic) SASampleStore sampleStore;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithSampleStore:;
- (id)sampleStore;
- (void)setSampleStore:;
+ (BOOL)supportsSecureCoding;
@end
