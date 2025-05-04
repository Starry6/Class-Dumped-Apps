@interface AWEIMFileContentProps : AWEIMUIViewPresenterProps
@property (nonatomic) @? tapActionBlock;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSString iconName;
@property (nonatomic) BOOL isExpired;
- (id)tapActionBlock;
- (void)setTapActionBlock:;
- (BOOL)isExpired;
- (id)iconName;
- (void)setSubTitle:;
- (id)subTitle;
- (void).cxx_destruct;
- (id)title;
- (void)setIconName:;
- (void)setTitle:;
- (void)setIsExpired:;
@end
