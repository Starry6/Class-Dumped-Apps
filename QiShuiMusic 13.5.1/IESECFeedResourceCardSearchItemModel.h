@interface IESECFeedResourceCardSearchItemModel : MTLModel
@property (nonatomic) q productId;
@property (nonatomic) NSString keyword;
@property (nonatomic) IESECURLModel searchImage;
@property (nonatomic) IESECURLModel jumpURL;
@property (nonatomic) NSString queryId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)jumpURL;
- (void)setSearchImage:;
- (id)searchImage;
- (void)setJumpURL:;
- (long long)productId;
- (void)setQueryId:;
- (void).cxx_destruct;
- (id)queryId;
- (void)setKeyword:;
- (id)keyword;
- (void)setProductId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
