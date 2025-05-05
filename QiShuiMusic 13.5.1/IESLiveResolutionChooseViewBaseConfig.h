@interface IESLiveResolutionChooseViewBaseConfig : NSObject
@property (nonatomic) NSArray resolutionItemArray;
@property (nonatomic) BOOL forLandscape;
@property (nonatomic) Q currentIndex;
- (BOOL)isForLandscape;
- (id)resolutionItemArray;
- (void)setForLandscape:;
- (void)setResolutionItemArray:;
- (void)setCurrentIndex:;
- (void).cxx_destruct;
- (unsigned long long)currentIndex;
@end
