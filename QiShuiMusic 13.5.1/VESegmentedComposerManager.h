@interface VESegmentedComposerManager : NSObject
@property (nonatomic) NSMutableArray composerBuffers;
@property (nonatomic) VESegmentedComposerQueue composerActivated;
- (id)composerBuffers;
- (BOOL)addComposerParamAtTimeRange:action:;
- (id)composerActivated;
- (id)getBufferAtTime:;
- (id)getBufferAtTimeRange:;
- (BOOL)needOperationAtTime:;
- (void)setComposerActivated:;
- (void)setComposerBuffers:;
- (id)init;
- (BOOL)hasComposer;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
@end
