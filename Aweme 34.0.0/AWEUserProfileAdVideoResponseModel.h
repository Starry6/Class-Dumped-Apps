@interface AWEUserProfileAdVideoResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray adItems;
@property (nonatomic) NSArray itemSeqs;
- (id)adItems;
- (void)setAdItems:;
- (id)itemSeqs;
- (void)setItemSeqs:;
- (void).cxx_destruct;
+ (id)adItemsJSONTransformer;
+ (id)itemSeqsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
