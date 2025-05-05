@interface IESLiveSaaSRankListErrorModel : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSString errorImage;
- (id)errorImage;
- (id)initWithTitle:subTitle:errorImage:;
- (void)setErrorImage:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (void)setSubTitle:;
- (id)subTitle;
@end
