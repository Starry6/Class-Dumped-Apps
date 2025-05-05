@interface UIIndexBarEntry : NSObject
@property (nonatomic) q type;
@property (nonatomic) NSString title;
@property (nonatomic) NSString effectiveShortTitle;
@property (nonatomic) UIImage image;
@property (nonatomic) NSIndexPath indexPath;
@property (nonatomic) NSString shortTitle;
- (void)setIndexPath:;
- (void)setType:;
- (void)setImage:;
- (void)setTitle:;
- (long long)type;
- (id)title;
- (void)setShortTitle:;
- (void).cxx_destruct;
- (id)shortTitle;
- (id)description;
- (id)indexPath;
- (id)image;
- (id)effectiveShortTitle;
+ (id)entryWithType:;
+ (id)entryWithTitle:;
+ (id)entryForNumbers;
+ (id)entryForSearch;
+ (id)entryForDotInView:;
+ (id)_dotImageInView:;
+ (id)_externalDotImageInView:;
@end
