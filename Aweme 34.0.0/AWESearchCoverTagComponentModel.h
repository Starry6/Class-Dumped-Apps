@interface AWESearchCoverTagComponentModel : AWESearchComponentBasicModel
@property (nonatomic) NSString text;
@property (nonatomic) Q size;
@property (nonatomic) NSString iconUrl;
@property (nonatomic) UIImage localImage;
- (id)iconUrl;
- (void)setIconUrl:;
- (void)setText:;
- (id)text;
- (unsigned long long)size;
- (void).cxx_destruct;
- (void)setSize:;
- (id)initWithDictionary:;
- (id)localImage;
- (void)setLocalImage:;
@end
