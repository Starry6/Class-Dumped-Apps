@interface CTSignalStrengthInfo : NSObject
@property (nonatomic) NSNumber bars;
@property (nonatomic) NSNumber displayBars;
@property (nonatomic) NSNumber maxDisplayBars;
- (id)initWithCoder:;
- (id)displayBars;
- (void)setMaxDisplayBars:;
- (void)encodeWithCoder:;
- (id)bars;
- (void).cxx_destruct;
- (id)description;
- (id)maxDisplayBars;
- (void)setBars:;
- (void)setDisplayBars:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
