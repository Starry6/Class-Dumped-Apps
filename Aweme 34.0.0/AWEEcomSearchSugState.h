@interface AWEEcomSearchSugState : NSObject
@property (nonatomic) q enterType;
@property (nonatomic) BOOL alreadySearched;
- (BOOL)alreadySearched;
- (void)setAlreadySearched:;
- (long long)enterType;
- (void)setEnterType:;
@end
