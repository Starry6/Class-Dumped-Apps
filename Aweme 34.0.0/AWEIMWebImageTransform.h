@interface AWEIMWebImageTransform : NSObject
@property (nonatomic) double cornerRadius;
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) NSString extCacheKey;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)appendingStringForCacheKey;
- (id)transformImageBeforeStoreWithImage:;
- (void)setExtCacheKey:;
- (id)extCacheKey;
- (void)setCornerRadius:;
- (id)size;
- (void).cxx_destruct;
- (void)setSize:;
- (double)cornerRadius;
+ (id)transformWithSize:cornerRadius:;
@end
