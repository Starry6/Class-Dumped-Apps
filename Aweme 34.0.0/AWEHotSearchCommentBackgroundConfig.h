@interface AWEHotSearchCommentBackgroundConfig : AWEBaseApiModel
@property (nonatomic) Q displayStyle;
- (void)setDisplayStyle:;
- (unsigned long long)displayStyle;
+ (id)displayStyleJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
