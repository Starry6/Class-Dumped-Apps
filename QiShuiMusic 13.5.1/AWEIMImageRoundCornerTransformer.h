@interface AWEIMImageRoundCornerTransformer : NSObject
@property (nonatomic) double roundCornerRatio;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)appendingStringForCacheKey;
- (id)initWithRoundCornerRatio:;
- (double)roundCornerRatio;
- (void)setRoundCornerRatio:;
- (id)transformImageBeforeStoreWithImage:;
@end
