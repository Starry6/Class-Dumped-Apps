@interface FMDSecureLocationContext : NSObject
@property (nonatomic) NSString findMyId;
@property (nonatomic) NSString mode;
- (id)initWithCoder:;
- (id)findMyId;
- (void)encodeWithCoder:;
- (void)setFindMyId:;
- (void).cxx_destruct;
- (id)description;
- (id)mode;
- (void)setMode:;
+ (BOOL)supportsSecureCoding;
@end
