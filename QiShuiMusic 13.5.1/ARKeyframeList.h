@interface ARKeyframeList : NSObject
@property (nonatomic) NSSet updatedAnchors;
@property (nonatomic) NSSet removedAnchors;
@property (nonatomic) r^{CV3DReconKeyframeList=} keyframeList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void).cxx_destruct;
- (double)timestamp;
- (void)setKeyframeList:updatedAnchors:removedAnchors:timestamp:;
- (id)keyframeList;
- (id)updatedAnchors;
- (void)setUpdatedAnchors:;
- (id)removedAnchors;
- (void)setRemovedAnchors:;
@end
