@interface AWEInteractionToggleFavoriteAwemeConfig : NSObject
@property (nonatomic) AWEAwemeModel aweme;
@property (nonatomic) AWEAwemeModel fromAweme;
@property (nonatomic) Q methodType;
@property (nonatomic) NSString pageType;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) BOOL isLongItem;
@property (nonatomic) BOOL hideAnimationWithSameEnterFrom;
@property (nonatomic) @? completionBlock;
@property (nonatomic) NSDictionary extra;
- (void)setEnterFrom:;
- (void)setEnterMethod:;
- (id)aweme;
- (void)setExtra:;
- (void)setAweme:;
- (id)enterMethod;
- (id)enterFrom;
- (BOOL)isLongItem;
- (void)setMethodType:;
- (unsigned long long)methodType;
- (void)setFromAweme:;
- (id)fromAweme;
- (void)setIsLongItem:;
- (BOOL)hideAnimationWithSameEnterFrom;
- (void)setHideAnimationWithSameEnterFrom:;
- (void)setCompletionBlock:;
- (id)completionBlock;
- (id)extra;
- (void)setPageType:;
- (void).cxx_destruct;
- (id)pageType;
@end
