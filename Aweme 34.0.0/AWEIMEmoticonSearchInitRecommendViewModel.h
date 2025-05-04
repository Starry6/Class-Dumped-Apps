@interface AWEIMEmoticonSearchInitRecommendViewModel : NSObject
@property (nonatomic) NSArray oftenSearchWords;
@property (nonatomic) NSArray operationWords;
@property (nonatomic) NSArray hotwords;
@property (nonatomic) NSArray categories;
@property (nonatomic) NSString chatTypeString;
- (id)chatTypeString;
- (id)hotwords;
- (void)setHotwords:;
- (id)operationWords;
- (void)setOperationWords:;
- (id)oftenSearchWords;
- (void)setOftenSearchWords:;
- (void)setChatTypeString:;
- (void)setCategories:;
- (id)categories;
- (void).cxx_destruct;
@end
