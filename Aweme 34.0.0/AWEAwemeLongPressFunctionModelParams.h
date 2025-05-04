@interface AWEAwemeLongPressFunctionModelParams : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) UIImage iconImage;
@property (nonatomic) @? actionBlock;
@property (nonatomic) @? willAppearBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)willAppearBlock;
- (void)setWillAppearBlock:;
- (id)iconImage;
- (void)setIconImage:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setActionBlock:;
- (id)actionBlock;
+ (id)makeWithTitle:iconImage:actionBlock:willAppearBlock:;
@end
