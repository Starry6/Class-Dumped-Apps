@interface CTNetwork : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString plmn;
@property (nonatomic) NSString rat;
- (void)setName:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (void)setRat:;
- (id)copyWithZone:;
- (id)plmn;
- (void)setPlmn:;
- (id)rat;
+ (BOOL)supportsSecureCoding;
@end
