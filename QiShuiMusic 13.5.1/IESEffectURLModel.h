@interface IESEffectURLModel : MTLModel
@property (nonatomic) NSString URI;
@property (nonatomic) NSArray originURLList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)URLList;
- (id)originURLList;
- (void)setOriginURLList:;
- (id)URI;
- (void)setURI:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
