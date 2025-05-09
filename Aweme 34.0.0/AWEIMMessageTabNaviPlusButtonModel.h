@interface AWEIMMessageTabNaviPlusButtonModel : NSObject
@property (nonatomic) UIImage image;
@property (nonatomic) NSString title;
@property (nonatomic) UIColor titleColor;
@property (nonatomic) @? handler;
@property (nonatomic) q priority;
@property (nonatomic) NSString actionName;
@property (nonatomic) NSString lightIconURL;
@property (nonatomic) NSString darkIconURL;
@property (nonatomic) NSString schema;
@property (nonatomic) NSDictionary mobExt;
- (id)lightIconURL;
- (id)darkIconURL;
- (id)mobExt;
- (void)setMobExt:;
- (void)setLightIconURL:;
- (void)setDarkIconURL:;
- (id)schema;
- (void)setHandler:;
- (id)titleColor;
- (id)actionName;
- (id)image;
- (void)setSchema:;
- (void)setImage:;
- (void)setTitleColor:;
- (id)handler;
- (long long)priority;
- (void)setPriority:;
- (void).cxx_destruct;
- (id)title;
- (void)setActionName:;
- (void)setTitle:;
@end
