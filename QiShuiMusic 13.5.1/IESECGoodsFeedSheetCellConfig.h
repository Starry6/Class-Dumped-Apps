@interface IESECGoodsFeedSheetCellConfig : NSObject
@property (nonatomic) IESECURLModel icon;
@property (nonatomic) NSString title;
@property (nonatomic) @? action;
- (id)icon;
- (id)action;
- (void)setTitle:;
- (void)setAction:;
- (id)title;
- (void)setIcon:;
- (void).cxx_destruct;
+ (id)actionWithTitle:icon:handler:;
@end
