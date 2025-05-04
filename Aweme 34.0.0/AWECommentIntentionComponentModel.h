@interface AWECommentIntentionComponentModel : AWEBaseApiModel
@property (nonatomic) NSString bizType;
@property (nonatomic) NSString text;
@property (nonatomic) NSString buttonText;
@property (nonatomic) NSString buttonURL;
@property (nonatomic) NSString uuid;
- (id)bizType;
- (void)setBizType:;
- (id)uuid;
- (void)setText:;
- (void)setUuid:;
- (id)text;
- (id)buttonText;
- (void).cxx_destruct;
- (void)setButtonText:;
- (id)buttonURL;
- (void)setButtonURL:;
+ (id)JSONKeyPathsByPropertyKey;
@end
