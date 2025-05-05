@interface AUAudioUnitPreset : NSObject
@property (nonatomic) q number;
@property (nonatomic) NSString name;
- (void)dealloc;
- (long long)number;
- (void)setName:;
- (id)initWithCoder:;
- (void)setNumber:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)name;
+ (BOOL)supportsSecureCoding;
@end
