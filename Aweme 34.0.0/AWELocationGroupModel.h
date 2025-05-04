@interface AWELocationGroupModel : MTLModel
@property (nonatomic) NSString index;
@property (nonatomic) NSArray cities;
@property (nonatomic) BOOL hideLocation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)hideLocation;
- (void)setHideLocation:;
- (void)setIndex:;
- (id)index;
- (id)initWithDictionary:error:;
- (id)cities;
- (void)setCities:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
