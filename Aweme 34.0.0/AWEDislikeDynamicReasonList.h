@interface AWEDislikeDynamicReasonList : AWEBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSArray reasonListArray;
@property (nonatomic) NSString extra;
- (void)setExtra:;
- (id)reasonListArray;
- (void)setReasonListArray:;
- (id)extra;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)reasonListArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
