@interface AWEPOIDetailMapDataManager : NSObject
@property (nonatomic) BOOL isRequestOnAir;
- (BOOL)isRequestOnAir;
- (void)setIsRequestOnAir:;
- (void)fetchDetailMapDataWithPOIID:sceneType:params:completion:;
- (void)fetchDetailMapDataWithPOIID:completion:;
- (void)fetchIMShareDetailMapDataWithPOIID:completion:;
@end
