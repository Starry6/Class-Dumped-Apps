@interface IESECCommentPhotoModel : MTLModel
@property (nonatomic) NSString url;
@property (nonatomic) NSString thumbnail;
@property (nonatomic) NSNumber width;
@property (nonatomic) NSNumber height;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setThumbnail:;
- (id)url;
- (id)init;
- (void)setWidth:;
- (void)setUrl:;
- (id)height;
- (id)width;
- (id)thumbnail;
- (void)setHeight:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
