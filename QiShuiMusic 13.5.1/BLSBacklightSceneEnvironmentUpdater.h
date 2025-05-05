@interface BLSBacklightSceneEnvironmentUpdater : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithEnvironment:;
- (void)updatedEnvironmentWithDelta:backlightSceneUpdate:;
- (void)performFrameSpecifiersRequest:;
- (void)performDesiredFidelityRequest:;
- (void).cxx_destruct;
@end
