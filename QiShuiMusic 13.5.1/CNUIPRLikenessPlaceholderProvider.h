@interface CNUIPRLikenessPlaceholderProvider : NSObject
@property (nonatomic) CNCache cache;
@property (nonatomic) BOOL isForCompany;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (unsigned long long)_cnui_likenessType;
- (id)initWithContact:;
- (void).cxx_destruct;
- (id)cache;
- (id)_cnui_likenessForSize:scale:;
- (id)_cnui_circularImageForSize:scale:;
- (id)_cnui_roundedRectImageForSize:scale:;
- (id)renderCircularImageForSilhouetteImage:size:scale:;
- (id)renderRoundedRectImageForSilhouetteImage:size:scale:;
- (BOOL)isForCompany;
- (void)setIsForCompany:;
+ (id)imageNameForDiameter:;
+ (id)companyImageNameForDiameter:;
@end
