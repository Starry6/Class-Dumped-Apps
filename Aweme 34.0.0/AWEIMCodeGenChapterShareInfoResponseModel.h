@interface AWEIMCodeGenChapterShareInfoResponseModel : AWEBaseDataModel
@property (nonatomic) NSInteger statusCode;
@property (nonatomic) NSString statusMsg;
@property (nonatomic) NSArray chapterShareInfoListModelArray;
- (id)statusMsg;
- (void)setStatusMsg:;
- (id)chapterShareInfoListModelArray;
- (void)setChapterShareInfoListModelArray:;
- (int)statusCode;
- (void).cxx_destruct;
- (void)setStatusCode:;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
