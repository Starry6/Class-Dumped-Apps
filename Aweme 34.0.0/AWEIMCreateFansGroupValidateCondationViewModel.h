@interface AWEIMCreateFansGroupValidateCondationViewModel : NSObject
@property (nonatomic) NSString titleIconLightURL;
@property (nonatomic) NSString titleIconDarkURL;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSString descripText;
@property (nonatomic) NSArray cellModels;
- (void)setCellModels:;
- (id)cellModels;
- (void)setDescripText:;
- (void)setTitleIconLightURL:;
- (void)setTitleIconDarkURL:;
- (void)__constructVMs:;
- (id)titleIconLightURL;
- (id)titleIconDarkURL;
- (id)descripText;
- (id)subtitle;
- (id)initWithModel:;
- (void)setSubtitle:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
@end
