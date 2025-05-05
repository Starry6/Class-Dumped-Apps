@interface IESECInnerFlowProductComment : IESECBaseApiModel
@property (nonatomic) NSArray productComments;
@property (nonatomic) NSArray storeComments;
@property (nonatomic) IESECInnerFlowProductCommentButton productCommentButton;
@property (nonatomic) IESECInnerFlowProductCommentButton storeCommentButton;
@property (nonatomic) q count;
@property (nonatomic) BOOL showPreview;
- (id)productComments;
- (id)productCommentButton;
- (void)setProductCommentButton:;
- (void)setProductComments:;
- (void)setStoreCommentButton:;
- (void)setStoreComments:;
- (id)storeCommentButton;
- (id)storeComments;
- (void)setCount:;
- (void).cxx_destruct;
- (long long)count;
- (BOOL)showPreview;
- (void)setShowPreview:;
+ (id)productCommentsJSONTransformer;
+ (id)storeCommentsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
