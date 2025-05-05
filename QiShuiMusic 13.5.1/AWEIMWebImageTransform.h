@interface AWEIMWebImageTransform : NSObject
@property (nonatomic) double cornerRadius;
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) NSString extCacheKey;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtCacheKey:;
- (id)appendingStringForCacheKey;
- (id)extCacheKey;
- (id)transformImageBeforeStoreWithImage:;
- (void)setCornerRadius:;
- (void).cxx_destruct;
- (double)cornerRadius;
- (void)setSize:;
- (id)size;
+ (id)transformWithSize:cornerRadius:;
@end
