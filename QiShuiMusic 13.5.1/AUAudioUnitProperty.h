@interface AUAudioUnitProperty : NSObject
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithKey:;
- (id)initWithKey:v2propID:scope:element:;
- (id)initWithKey:scope:element:;
+ (BOOL)supportsSecureCoding;
+ (id)propertyWithKey:;
+ (id)propertyWithKey:v2propID:scope:element:;
+ (id)propertyWithKey:scope:element:;
@end
