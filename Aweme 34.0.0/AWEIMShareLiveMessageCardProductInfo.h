@interface AWEIMShareLiveMessageCardProductInfo : MTLModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString price;
@property (nonatomic) NSString iconUrl;
@property (nonatomic) Q showDetails;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString productId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)iconUrl;
- (void)setIconUrl:;
- (void)updateWithProductInfo:;
- (unsigned long long)showDetails;
- (void)setShowDetails:;
- (id)price;
- (id)schema;
- (void)setSchema:;
- (id)productId;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setPrice:;
- (void)setProductId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
