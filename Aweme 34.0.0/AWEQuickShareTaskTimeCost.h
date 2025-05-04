@interface AWEQuickShareTaskTimeCost : NSObject
@property (nonatomic) double mainThreadPrepareSource;
@property (nonatomic) double mainThreadPreparePublish;
@property (nonatomic) double mainThreadAll;
@property (nonatomic) double beforePublish;
- (double)mainThreadPrepareSource;
- (void)setMainThreadPrepareSource:;
- (double)mainThreadPreparePublish;
- (void)setMainThreadPreparePublish:;
- (double)mainThreadAll;
- (void)setMainThreadAll:;
- (double)beforePublish;
- (void)setBeforePublish:;
@end
