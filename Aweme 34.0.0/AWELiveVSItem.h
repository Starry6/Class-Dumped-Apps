@interface AWELiveVSItem : AWEBaseApiModel
@property (nonatomic) AWELiveVSItemBar vsCommentItem;
@property (nonatomic) AWELiveVSItemBar vsBarItem;
- (id)vsCommentItem;
- (void)setVsCommentItem:;
- (id)vsBarItem;
- (void)setVsBarItem:;
- (void).cxx_destruct;
+ (id)vsCommentItemJSONTransformer;
+ (id)vsBarItemJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
