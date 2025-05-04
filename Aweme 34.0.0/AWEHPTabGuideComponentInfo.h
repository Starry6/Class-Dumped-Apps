@interface AWEHPTabGuideComponentInfo : NSObject
@property (nonatomic) q type;
@property (nonatomic) NSString tabID;
@property (nonatomic) NSString componentID;
@property (nonatomic) NSString clientExtra;
@property (nonatomic) NSString title;
@property (nonatomic) NSString text;
- (id)clientExtra;
- (void)setClientExtra:;
- (void)setTabID:;
- (void)setText:;
- (id)text;
- (long long)type;
- (id)description;
- (void)setType:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setComponentID:;
- (id)componentID;
- (id)tabID;
@end
