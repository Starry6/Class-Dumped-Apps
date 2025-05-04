@interface AWECodeGenV1CommentDeleteResponse : AWEBaseResponseModel
@property (nonatomic) BOOL controlCommentCheck;
@property (nonatomic) AWECodeGenCommentUserGuideModel userGuideModel;
- (BOOL)controlCommentCheck;
- (void)setControlCommentCheck:;
- (id)userGuideModel;
- (void)setUserGuideModel:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
