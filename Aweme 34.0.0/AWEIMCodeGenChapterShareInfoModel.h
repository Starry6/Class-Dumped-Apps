@interface AWEIMCodeGenChapterShareInfoModel : AWEBaseDataModel
@property (nonatomic) q itemId;
@property (nonatomic) NSInteger showStatus;
@property (nonatomic) NSInteger chapterNodeIndex;
@property (nonatomic) q status;
@property (nonatomic) NSString modifiedChapterTitle;
@property (nonatomic) NSString modifiedChapterDesc;
- (void)setShowStatus:;
- (int)showStatus;
- (int)chapterNodeIndex;
- (void)setChapterNodeIndex:;
- (id)modifiedChapterTitle;
- (id)modifiedChapterDesc;
- (void)setModifiedChapterTitle:;
- (void)setModifiedChapterDesc:;
- (void)setStatus:;
- (void).cxx_destruct;
- (long long)status;
- (long long)itemId;
- (void)setItemId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
