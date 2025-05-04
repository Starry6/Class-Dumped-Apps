@interface AWEFeedActivityTopBarItemConfig : MTLModel
@property (nonatomic) NSString title;
@property (nonatomic) NSArray images;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)images;
- (BOOL)isValidWithError:;
- (void).cxx_destruct;
- (id)title;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)imagesJSONTransformer;
@end
