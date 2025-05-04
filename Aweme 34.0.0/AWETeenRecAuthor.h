@interface AWETeenRecAuthor : AWEBaseApiModel
@property (nonatomic) AWEUserModel author;
@property (nonatomic) NSString reason;
@property (nonatomic) NSArray videoRecList;
@property (nonatomic) NSArray awemeList;
- (id)awemeList;
- (void)setAwemeList:;
- (id)videoRecList;
- (void)setVideoRecList:;
- (id)author;
- (void)setReason:;
- (void).cxx_destruct;
- (void)setAuthor:;
- (id)reason;
+ (id)authorJSONTransformer;
+ (id)videoRecListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
