@interface ASCArtwork : NSObject
@property (nonatomic) @ dataSource;
@property (nonatomic) UIImage embeddedImage;
@property (nonatomic) NSString URLTemplate;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) NSString decoration;
@property (nonatomic) NSString preferredCrop;
@property (nonatomic) NSString preferredFormat;
- (id)preferredFormat;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (double)height;
- (void)encodeWithCoder:;
- (double)width;
- (id)dataSource;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)URLTemplate;
- (id)decoration;
- (id)initWithURLTemplate:width:height:decoration:preferredCrop:preferredFormat:;
- (id)makeURLWithSubstitutions:;
- (id)initWithImage:decoration:;
- (id)embeddedImage;
- (id)preferredCrop;
+ (BOOL)supportsSecureCoding;
@end
