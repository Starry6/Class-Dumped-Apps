@interface AWEGoodsFavoriteTableViewCellTagAdapter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)titleWithModel:;
+ (id)typeTitleWithModel:;
+ (id)descriptionTitleWithModel:;
+ (BOOL)shouldShowPriceLabelWithModel:;
+ (id)coverImagURLArrayWithModel:;
@end
