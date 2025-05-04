@interface AWERecordInspirationCategoryInfo : MTLModel
@property (nonatomic) q statusCode;
@property (nonatomic) NSString statusMsg;
@property (nonatomic) NSArray categoryItem;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)statusMsg;
- (void)setStatusMsg:;
- (void)setCategoryItem:;
- (long long)statusCode;
- (void).cxx_destruct;
- (void)setStatusCode:;
- (id)categoryItem;
+ (id)categoryItemJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
