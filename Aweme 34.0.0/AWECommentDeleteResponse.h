@interface AWECommentDeleteResponse : AWEBaseApiModel
@property (nonatomic) BOOL controlCommentCheck;
@property (nonatomic) AWECommentUserGuideModel guideModel;
- (id)guideModel;
- (void)setGuideModel:;
- (BOOL)controlCommentCheck;
- (void)setControlCommentCheck:;
- (void).cxx_destruct;
+ (id)guideModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
