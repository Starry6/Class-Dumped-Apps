@interface ICDocCamProcessingBlocker : NSObject
@property (nonatomic) <ICDocCamProcessingBlockerDelegate> delegate;
@property (nonatomic) NSMutableSet blockerSet;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithDelegate:;
- (BOOL)blocked;
- (void)addBlockerOfType:clearRectangles:clearQueue:;
- (void)removeBlockerOfType:;
- (id)blockerSet;
- (void)setBlockerSet:;
@end
