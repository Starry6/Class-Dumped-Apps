@interface IESECWinRouter : NSObject
@property (nonatomic) q layoutType;
@property (nonatomic) NSString defaultCategoryIds;
@property (nonatomic) NSString defaultSubCategoryIds;
- (id)defaultCategoryIds;
- (id)defaultSubCategoryIds;
- (void)setDefaultCategoryIds:;
- (void)setDefaultSubCategoryIds:;
- (long long)layoutType;
- (void)setLayoutType:;
- (id)initWithParams:;
- (void).cxx_destruct;
@end
