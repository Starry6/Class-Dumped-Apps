@interface MNCoreMotionContextProvider : NSObject
@property (nonatomic) <GEOMotionContextProviderDelegate> motionDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void).cxx_destruct;
- (void)startMotionUpdates;
- (void)setMotionDelegate:;
- (void)stopMotionUpdates;
- (id)motionDelegate;
- (id)initWithTraceRecorder:;
@end
