@interface AWECodeGenRelationDynamicLableModel : AWEBaseDataModel
@property (nonatomic) NSString nickname;
@property (nonatomic) NSString labelInfo;
@property (nonatomic) NSInteger count;
@property (nonatomic) NSString userId;
@property (nonatomic) q type;
@property (nonatomic) NSString tabLabelInfo;
@property (nonatomic) q showType;
@property (nonatomic) NSString labelInfoColor;
@property (nonatomic) NSString labelInfoBackgroundColor;
@property (nonatomic) NSString tabLabelInfoColor;
@property (nonatomic) NSString tabLabelInfoBackgroundColor;
@property (nonatomic) AWECodeGenUrlModel labelInfoBackgroundImgModel;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString labelInfoBackgroundImgStretchPosition;
@property (nonatomic) q commentId;
@property (nonatomic) NSString labelTag;
@property (nonatomic) NSString labelType;
@property (nonatomic) NSArray userArray;
@property (nonatomic) NSString extra;
@property (nonatomic) q subType;
@property (nonatomic) NSString logExtra;
@property (nonatomic) NSDictionary comment;
@property (nonatomic) NSDictionary icon;
@property (nonatomic) NSDictionary iconList;
@property (nonatomic) BOOL showArrow;
@property (nonatomic) q tagId;
- (void)setExtra:;
- (void)setLogExtra:;
- (id)logExtra;
- (void)setCommentId:;
- (long long)commentId;
- (id)iconList;
- (void)setIconList:;
- (BOOL)showArrow;
- (id)tabLabelInfo;
- (void)setTabLabelInfo:;
- (id)labelInfoColor;
- (void)setLabelInfoColor:;
- (id)labelInfoBackgroundColor;
- (void)setLabelInfoBackgroundColor:;
- (id)tabLabelInfoColor;
- (void)setTabLabelInfoColor:;
- (id)tabLabelInfoBackgroundColor;
- (void)setTabLabelInfoBackgroundColor:;
- (id)labelInfoBackgroundImgStretchPosition;
- (void)setLabelInfoBackgroundImgStretchPosition:;
- (void)setShowArrow:;
- (id)labelTag;
- (id)userArray;
- (void)setUserArray:;
- (id)labelInfoBackgroundImgModel;
- (void)setLabelInfoBackgroundImgModel:;
- (void)setLabelTag:;
- (id)schema;
- (id)nickname;
- (id)userId;
- (void)setSchema:;
- (id)comment;
- (void)setCount:;
- (id)labelType;
- (id)icon;
- (void)setLabelType:;
- (id)extra;
- (int)count;
- (long long)type;
- (long long)subType;
- (void)setType:;
- (void)setIcon:;
- (void).cxx_destruct;
- (void)setUserId:;
- (void)setTagId:;
- (void)setSubType:;
- (void)setNickname:;
- (long long)tagId;
- (id)labelInfo;
- (void)setComment:;
- (void)setLabelInfo:;
- (void)setShowType:;
- (long long)showType;
+ (id)JSONKeyPathsByPropertyKey;
@end
