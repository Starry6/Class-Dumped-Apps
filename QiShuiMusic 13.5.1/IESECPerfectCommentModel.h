@interface IESECPerfectCommentModel : MTLModel
@property (nonatomic) NSString title;
@property (nonatomic) NSNumber amount;
@property (nonatomic) NSArray data;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)data;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (void)setData:;
- (id)amount;
- (void)setAmount:;
+ (id)dataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
