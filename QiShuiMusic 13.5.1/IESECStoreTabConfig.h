@interface IESECStoreTabConfig : MTLModel
@property (nonatomic) NSString tabName;
@property (nonatomic) NSString perfTrackEventName;
@property (nonatomic) NSArray scrollViewIds;
@property (nonatomic) BOOL needComponents;
- (BOOL)needComponents;
- (id)perfTrackEventName;
- (id)scrollViewIds;
- (void)setNeedComponents:;
- (void)setPerfTrackEventName:;
- (void)setScrollViewIds:;
- (void).cxx_destruct;
- (void)setTabName:;
- (id)tabName;
@end
