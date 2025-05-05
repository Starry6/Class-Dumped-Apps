@interface BDUGLuckyTaskBackSidebarModel : BDUGLuckyJSONModel
@property (nonatomic) NSString text;
@property (nonatomic) NSArray bgcolor;
@property (nonatomic) NSString textColor;
@property (nonatomic) NSString position;
@property (nonatomic) NSString openSchema;
@property (nonatomic) NSString sidebarKey;
- (id)bgcolor;
- (id)openSchema;
- (void)setBgcolor:;
- (void)setOpenSchema:;
- (void)setSidebarKey:;
- (id)sidebarKey;
- (void)setPosition:;
- (id)position;
- (void)setText:;
- (void)setTextColor:;
- (void).cxx_destruct;
- (id)textColor;
- (id)text;
@end
