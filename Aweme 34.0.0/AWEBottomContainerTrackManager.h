@interface AWEBottomContainerTrackManager : NSObject
@property (nonatomic) NSMutableArray currentShowElements;
@property (nonatomic) NSMutableArray currentShowElementsVisiableType;
@property (nonatomic) NSMutableArray shouldShowElements;
@property (nonatomic) NSMutableArray shouldShowElementsVisiableType;
- (void)addTrackElement:appear:clearAppearCache:;
- (id)currentShowElements;
- (id)currentShowElementsVisiableType;
- (id)shouldShowElements;
- (id)shouldShowElementsVisiableType;
- (void)addTrackElement:appear:;
- (void)trackElementWithModel:referString:;
- (void)setCurrentShowElements:;
- (void)setCurrentShowElementsVisiableType:;
- (void)setShouldShowElements:;
- (void)setShouldShowElementsVisiableType:;
- (void)resetData;
- (void).cxx_destruct;
@end
