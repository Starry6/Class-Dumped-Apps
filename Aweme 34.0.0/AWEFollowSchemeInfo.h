@interface AWEFollowSchemeInfo : MTLModel
@property (nonatomic) NSString name;
@property (nonatomic) NSString scheme;
@property (nonatomic) Q schemeType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)schemeType;
- (void)setSchemeType:;
- (id)scheme;
- (void)setScheme:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
+ (id)JSONKeyPathsByPropertyKey;
@end
