@interface AVCAudioPowerSpectrumChannel : NSObject
@property (nonatomic) NSArray bins;
- (id)init;
- (void)dealloc;
- (id)bins;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)applyChannelBins:binCount:;
+ (BOOL)supportsSecureCoding;
@end
