@interface AWEFindFriendsVerticalFunctionModel : NSObject
@property (nonatomic) q type;
@property (nonatomic) NSString iconURL;
@property (nonatomic) NSString primaryTitle;
@property (nonatomic) NSString subTitle;
@property (nonatomic) UIImage buttonImg;
@property (nonatomic) @? clickBlock;
- (void)setClickBlock:;
- (id)clickBlock;
- (id)buttonImg;
- (void)setButtonImg:;
- (void)setIconURL:;
- (id)iconURL;
- (void)setSubTitle:;
- (id)subTitle;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (void)setPrimaryTitle:;
- (id)primaryTitle;
@end
