@interface AWEECShoppingGuideSUGModel : MTLModel
@property (nonatomic) NSString sugID;
@property (nonatomic) NSString content;
@property (nonatomic) Q type;
@property (nonatomic) NSString queryType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)sugID;
- (void)setSugID:;
- (id)content;
- (id)queryType;
- (unsigned long long)type;
- (void)setContent:;
- (void)setType:;
- (void).cxx_destruct;
- (void)setQueryType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
