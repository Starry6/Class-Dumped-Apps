@interface AWETextImageTagModel : MTLModel
@property (nonatomic) q tagType;
@property (nonatomic) NSString tagImageName;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tagImageName;
- (void)setTagImageName:;
- (long long)tagType;
- (void)setHeight:;
- (void)setWidth:;
- (double)width;
- (void).cxx_destruct;
- (double)height;
- (id)copyWithZone:;
- (void)setTagType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
