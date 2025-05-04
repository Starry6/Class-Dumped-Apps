@interface AWESearchVideoKeySegmentModel : AWEBaseApiModel
@property (nonatomic) NSString desc;
@property (nonatomic) Q displayStyle;
@property (nonatomic) NSNumber keySegmentTime;
@property (nonatomic) NSString title;
@property (nonatomic) NSString icon;
- (void)setKeySegmentTime:;
- (id)keySegmentTime;
- (void)setDisplayStyle:;
- (id)icon;
- (unsigned long long)displayStyle;
- (void)setDesc:;
- (id)desc;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
