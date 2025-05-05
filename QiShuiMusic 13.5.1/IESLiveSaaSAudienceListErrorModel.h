@interface IESLiveSaaSAudienceListErrorModel : BDDynamicModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSString errorImage;
@property (nonatomic) @? actionBlock;
@property (nonatomic) BOOL isNetWorkError;
@property (nonatomic) NSAttributedString attributedTitle;
- (id)errorImage;
- (id)initWithTitle:subTitle:errorImage:actionBlock:isNetWorkError:;
- (BOOL)isNetWorkError;
- (void)setErrorImage:;
- (void)setIsNetWorkError:;
- (void)setModelWithTitle:subTitle:errorImage:actionBlock:isNetWorkError:;
- (id)actionBlock;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (void)setSubTitle:;
- (id)subTitle;
- (void)setActionBlock:;
@end
