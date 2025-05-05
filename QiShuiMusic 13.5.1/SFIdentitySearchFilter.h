@interface SFIdentitySearchFilter : NSObject
@property (nonatomic) NSArray certificateSerialNumbers;
@property (nonatomic) NSArray certificateTypes;
@property (nonatomic) NSArray keySpecifiers;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)certificateSerialNumbers;
- (id)certificateTypes;
- (id)keySpecifiers;
- (void)setCertificateSerialNumbers:;
- (void)setCertificateTypes:;
- (void)setKeySpecifiers:;
+ (BOOL)supportsSecureCoding;
@end
