@interface CTSimLabel : NSObject
@property (nonatomic) NSString unique_id;
@property (nonatomic) NSString text;
@property (nonatomic) BOOL didSetup;
- (void)setText:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)text;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)unique_id;
- (id)initWithId:andText:andDidSetup:;
- (void)setUnique_id:;
- (BOOL)didSetup;
- (void)setDidSetup:;
+ (BOOL)supportsSecureCoding;
@end
