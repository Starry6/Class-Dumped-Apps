@interface CADisplayPersistedPreferredMode : NSObject
@property (nonatomic) NSString uuid;
@property (nonatomic) NSDictionary mode;
- (void)dealloc;
- (id)uuid;
- (void)setUuid:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)mode;
- (void)setMode:;
+ (BOOL)supportsSecureCoding;
@end
