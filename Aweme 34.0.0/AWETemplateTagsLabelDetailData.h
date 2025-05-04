@interface AWETemplateTagsLabelDetailData : AWEBaseApiModel
@property (nonatomic) NSArray userList;
@property (nonatomic) NSArray commentList;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString recommendReason;
@property (nonatomic) NSString extra;
@property (nonatomic) AWETemplateTagsLabelTabGuideInfo tabGuideInfo;
- (void)setExtra:;
- (id)userList;
- (void)setRecommendReason:;
- (id)recommendReason;
- (id)commentList;
- (void)setCommentList:;
- (void)setUserList:;
- (id)tabGuideInfo;
- (void)setTabGuideInfo:;
- (id)schema;
- (void)setSchema:;
- (id)extra;
- (void).cxx_destruct;
+ (id)userListJSONTransformer;
+ (id)commentListJSONTransformer;
+ (id)tabGuideInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
