@interface IFCacheImage : IFConcreteImage
@property (nonatomic) NSUUID uuid;
@property (nonatomic) NSData validationToken;
- (id)validationToken;
- (id)uuid;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithData:uuid:validationToken:;
- (id)initWithCGImage:scale:minimumSize:placeholder:;
- (void).cxx_destruct;
+ (BOOL)supportsSecureCoding;
@end
