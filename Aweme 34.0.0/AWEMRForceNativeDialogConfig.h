@interface AWEMRForceNativeDialogConfig : NSObject
@property (nonatomic) q style;
@property (nonatomic) q iconType;
@property (nonatomic) UIImage iconPlaceHolder;
@property (nonatomic) NSString iconUrl;
@property (nonatomic) NSString title;
@property (nonatomic) NSString content;
@property (nonatomic) NSArray buttons;
- (id)iconUrl;
- (void)setIconUrl:;
- (void)setIconPlaceHolder:;
- (id)iconPlaceHolder;
- (BOOL)isValidWithError:;
- (id)content;
- (void)setButtons:;
- (id)buttons;
- (long long)style;
- (id)description;
- (void)setContent:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)copyWithZone:;
- (void)setStyle:;
- (long long)iconType;
- (void)setIconType:;
@end
