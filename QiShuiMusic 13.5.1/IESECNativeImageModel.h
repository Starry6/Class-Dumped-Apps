@interface IESECNativeImageModel : MTLModel
@property (nonatomic) Q type;
@property (nonatomic) NSString resourceName;
@property (nonatomic) NSNumber width;
@property (nonatomic) NSNumber height;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setType:;
- (void)setWidth:;
- (id)height;
- (id)width;
- (unsigned long long)type;
- (void)setHeight:;
- (void).cxx_destruct;
- (id)resourceName;
- (void)setResourceName:;
+ (id)JSONKeyPathsByPropertyKey;
@end
