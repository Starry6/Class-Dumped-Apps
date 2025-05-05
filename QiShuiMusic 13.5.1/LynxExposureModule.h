@interface LynxExposureModule : NSObject
@property (nonatomic) @ extraData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithLynxContext:;
- (void)resumeExposure;
- (void)runOnUIThreadSafely:;
- (void)setObserverFrameRate:;
- (void)stopExposure:;
- (void).cxx_destruct;
- (id)exposure;
+ (id)methodLookup;
+ (id)name;
@end
