@interface AWESearchNoResultModel : AWEBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString redirectTitle;
@property (nonatomic) NSString schema;
- (id)redirectTitle;
- (void)setRedirectTitle:;
- (id)schema;
- (void)setSchema:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
