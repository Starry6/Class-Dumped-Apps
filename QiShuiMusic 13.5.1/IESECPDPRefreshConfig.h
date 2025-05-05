@interface IESECPDPRefreshConfig : NSObject
@property (nonatomic) BOOL resizeOffset;
@property (nonatomic) BOOL forceRefresh;
@property (nonatomic) BOOL noMoreRecommend;
@property (nonatomic) BOOL needUpdateSections;
@property (nonatomic) NSArray objects;
- (BOOL)noMoreRecommend;
- (BOOL)needUpdateSections;
- (BOOL)resizeOffset;
- (void)setNeedUpdateSections:;
- (void)setNoMoreRecommend:;
- (void)setResizeOffset:;
- (BOOL)forceRefresh;
- (void)setObjects:;
- (id)objects;
- (void).cxx_destruct;
- (void)setForceRefresh:;
@end
