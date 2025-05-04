@interface AWECodeGenGameTagInfoModel : AWEBaseDataModel
@property (nonatomic) q tagId;
@property (nonatomic) NSString tagName;
@property (nonatomic) NSArray gameIdArray;
- (id)gameIdArray;
- (void)setGameIdArray:;
- (void).cxx_destruct;
- (void)setTagId:;
- (long long)tagId;
- (id)tagName;
- (void)setTagName:;
+ (id)JSONKeyPathsByPropertyKey;
@end
