@interface AWENearbyC2ContainerStore : NSObject
@property (nonatomic) BOOL isScrolling;
@property (nonatomic) BOOL needShowHalfScreen;
@property (nonatomic) BOOL readyTrackTabEnterWhenDidAppear;
- (BOOL)needShowHalfScreen;
- (void)setNeedShowHalfScreen:;
- (BOOL)readyTrackTabEnterWhenDidAppear;
- (void)setReadyTrackTabEnterWhenDidAppear:;
- (void)setIsScrolling:;
- (BOOL)isScrolling;
@end
