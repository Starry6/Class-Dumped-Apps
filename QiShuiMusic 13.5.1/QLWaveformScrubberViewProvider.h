@interface QLWaveformScrubberViewProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)createFilmstripViewForVideoScrubberView:;
+ (void)generateWaveformForWidth:asset:updateHandler:;
@end
