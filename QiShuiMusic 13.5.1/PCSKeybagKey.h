@interface PCSKeybagKey : NSObject
@property (nonatomic) NSData data;
@property (nonatomic) q flags;
- (id)data;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setData:;
- (void)setFlags:;
- (long long)flags;
+ (BOOL)supportsSecureCoding;
@end
