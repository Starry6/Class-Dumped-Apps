@interface SFButton : NSObject
@property (nonatomic) SFImage image;
@property (nonatomic) SFImage selectedImage;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSData jsonData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithProtobuf:;
- (void)setImage:;
- (id)initWithCoder:;
- (id)jsonData;
- (BOOL)isSelected;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setIsSelected:;
- (id)dictionaryRepresentation;
- (id)image;
- (id)copyWithZone:;
- (void)setSelectedImage:;
- (id)selectedImage;
- (BOOL)hasIsSelected;
+ (BOOL)supportsSecureCoding;
@end
