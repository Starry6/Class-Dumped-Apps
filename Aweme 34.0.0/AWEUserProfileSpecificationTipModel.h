@interface AWEUserProfileSpecificationTipModel : MTLModel
@property (nonatomic) Q type;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)type;
- (void)setType:;
+ (id)JSONKeyPathsByPropertyKey;
+ (Class)classForParsingJSONDictionary:;
@end
