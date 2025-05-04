@interface AWESearchGoodsFeedbackModel : AWEBaseApiModel
@property (nonatomic) q type;
@property (nonatomic) NSString title;
@property (nonatomic) double padding;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString source;
@property (nonatomic) q showIconNum;
- (long long)showIconNum;
- (void)setShowIconNum:;
- (id)schema;
- (double)padding;
- (void)setSchema:;
- (long long)type;
- (void)setPadding:;
- (void)setType:;
- (void).cxx_destruct;
- (id)source;
- (id)title;
- (void)setSource:;
- (void)setTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
