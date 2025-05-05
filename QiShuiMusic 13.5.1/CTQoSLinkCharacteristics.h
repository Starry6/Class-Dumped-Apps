@interface CTQoSLinkCharacteristics : NSObject
@property (nonatomic) NSNumber bitRateMaxUL;
@property (nonatomic) NSNumber bitRateMaxDL;
@property (nonatomic) NSNumber bitRateGuaranteedUL;
@property (nonatomic) NSNumber bitRateGuaranteedDL;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)bitRateMaxUL;
- (void)setBitRateMaxUL:;
- (id)bitRateMaxDL;
- (void)setBitRateMaxDL:;
- (id)bitRateGuaranteedUL;
- (void)setBitRateGuaranteedUL:;
- (id)bitRateGuaranteedDL;
- (void)setBitRateGuaranteedDL:;
+ (BOOL)supportsSecureCoding;
@end
