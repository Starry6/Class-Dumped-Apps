@interface AWEDeleteMultiCommentResponse : AWEBaseApiModel
@property (nonatomic) NSArray deleteResult;
@property (nonatomic) NSArray blockResult;
@property (nonatomic) BOOL controlCommentCheck;
- (BOOL)controlCommentCheck;
- (id)blockResult;
- (void)setControlCommentCheck:;
- (void)setDeleteResult:;
- (void)setBlockResult:;
- (void).cxx_destruct;
- (id)deleteResult;
+ (id)deleteResultJSONTransformer;
+ (id)blockResultJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
