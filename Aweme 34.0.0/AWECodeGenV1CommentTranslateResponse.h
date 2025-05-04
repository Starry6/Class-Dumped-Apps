@interface AWECodeGenV1CommentTranslateResponse : AWEBaseResponseModel
@property (nonatomic) NSString originalComment;
@property (nonatomic) NSString traslateComment;
@property (nonatomic) NSArray textExtraModelArray;
- (id)traslateComment;
- (id)textExtraModelArray;
- (id)originalComment;
- (void)setOriginalComment:;
- (void)setTraslateComment:;
- (void)setTextExtraModelArray:;
- (void).cxx_destruct;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
