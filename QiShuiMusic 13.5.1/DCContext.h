@interface DCContext : NSObject
@property (nonatomic) NSString clientAppID;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)clientAppID;
- (void)setClientAppID:;
+ (BOOL)supportsSecureCoding;
@end
