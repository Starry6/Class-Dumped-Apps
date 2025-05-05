@interface TIStatisticChange : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSInteger value;
@property (nonatomic) NSString inputMode;
- (id)inputMode;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (int)value;
- (id)name;
- (id)copyWithZone:;
- (id)initWithName:andValue:andInputMode:;
+ (BOOL)supportsSecureCoding;
+ (BOOL)_shouldResetOnNewInputMode;
+ (id)statisticChangeWithName:andValue:andInputMode:;
@end
