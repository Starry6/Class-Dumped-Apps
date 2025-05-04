@interface AWETrackerDataTransmissionToken : NSObject
@property (nonatomic) NSString tokenId;
@property (nonatomic) q currentState;
@property (nonatomic) NSString event;
@property (nonatomic) AWETrackerParamsPassThroughBlock blockObj;
@property (nonatomic) @? cancellingBlock;
- (void)setTokenId:;
- (id)enableOverrideParams;
- (id)initWithEvent:withBlockObj:withCancellingBlock:;
- (id)cancellingBlock;
- (id)blockObj;
- (id)enableParamsOverrideForKey:;
- (id)syncLifeCycleWith:;
- (void)setBlockObj:;
- (void)setCancellingBlock:;
- (void)setCurrentState:;
- (void)setEvent:;
- (BOOL)isCancelled;
- (void)cancel;
- (long long)currentState;
- (void).cxx_destruct;
- (id)event;
- (id)tokenId;
@end
