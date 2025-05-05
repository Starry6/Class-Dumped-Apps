@interface BUTrackerEventConfig : NSObject
@property (nonatomic) BOOL isFromFE;
@property (nonatomic) BOOL needIgnoreTrack;
- (BOOL)needIgnoreTrack;
- (BOOL)isFromFE;
- (void)setIsFromFE:;
- (void)setNeedIgnoreTrack:;
- (id)init;
@end
