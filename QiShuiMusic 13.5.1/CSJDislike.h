@interface CSJDislike : NSObject
@property (nonatomic) CSJNativeAd nativeAd;
@property (nonatomic) NSArray filterWords;
@property (nonatomic) NSMutableArray AllFilterWords;
- (id)AllFilterWords;
- (void)setFilterWords:;
- (void)didSelectedFilterWordWithReason:;
- (id)filterWords;
- (id)initWithNativeAd:;
- (id)nativeAd;
- (void)setAllFilterWords:;
- (void)setNativeAd:;
- (BOOL)isMemberOfClass:;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:;
@end
