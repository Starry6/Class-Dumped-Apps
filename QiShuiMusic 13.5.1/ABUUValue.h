@interface ABUUValue : NSObject
@property (nonatomic) NSMutableArray userValues;
- (double)sumUValuesWithEcpmTTL:;
- (void)updateValue:withJsMode:;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)userValues;
- (void)setUserValues:;
+ (BOOL)supportsSecureCoding;
@end
