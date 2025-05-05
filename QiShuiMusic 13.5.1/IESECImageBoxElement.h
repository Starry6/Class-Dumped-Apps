@interface IESECImageBoxElement : MTLModel
@property (nonatomic) IESECImageModel image;
@property (nonatomic) IESECLinkConfig link;
@property (nonatomic) IESECRadiusConfig radius;
@property (nonatomic) BOOL usePlaceholder;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)link;
- (void)setRadius:;
- (void)setLink:;
- (id)radius;
- (void)setImage:;
- (void).cxx_destruct;
- (id)image;
- (BOOL)usePlaceholder;
- (void)setUsePlaceholder:;
+ (id)JSONKeyPathsByPropertyKey;
@end
