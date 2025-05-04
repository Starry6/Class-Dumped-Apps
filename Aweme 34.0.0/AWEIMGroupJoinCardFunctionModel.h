@interface AWEIMGroupJoinCardFunctionModel : MTLModel
@property (nonatomic) NSString iconLight;
@property (nonatomic) NSString iconDark;
@property (nonatomic) NSString title;
@property (nonatomic) NSString schema;
@property (nonatomic) q type;
@property (nonatomic) UIColor backgroundColor;
@property (nonatomic) NSArray groupTypes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)iconLight;
- (void)setIconLight:;
- (id)iconDark;
- (void)setIconDark:;
- (void)setGroupTypes:;
- (id)schema;
- (void)setSchema:;
- (long long)type;
- (id)backgroundColor;
- (void)setType:;
- (void)setBackgroundColor:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)groupTypes;
+ (id)JSONKeyPathsByPropertyKey;
@end
