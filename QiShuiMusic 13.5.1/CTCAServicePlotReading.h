@interface CTCAServicePlotReading : NSObject
@property (nonatomic) NSDate at;
@property (nonatomic) NSArray targets;
- (id)targets;
- (id)initWithCoder:;
- (void)setTargets:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)at;
- (void)setAt:;
+ (BOOL)supportsSecureCoding;
@end
