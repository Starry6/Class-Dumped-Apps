@interface AWECodeGenV1CommentMultiDeleteResponse : AWEBaseResponseModel
@property (nonatomic) NSArray deleteResultModelArray;
@property (nonatomic) NSArray blockResultModelArray;
@property (nonatomic) BOOL controlCommentCheck;
@property (nonatomic) AWECodeGenCommentUserGuideModel userGuideModel;
- (BOOL)controlCommentCheck;
- (void)setControlCommentCheck:;
- (id)userGuideModel;
- (void)setUserGuideModel:;
- (id)deleteResultModelArray;
- (void)setDeleteResultModelArray:;
- (id)blockResultModelArray;
- (void)setBlockResultModelArray:;
- (void).cxx_destruct;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
