@interface BLSAlwaysOnSession : NSObject
@property (nonatomic) BLSFrameSpecifierModel model;
@property (nonatomic) <BLSBacklightSceneEnvironment> environment;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)model;
- (void)setModel:;
- (id)initWithEnvironment:;
- (id)environment;
- (void).cxx_destruct;
- (id)description;
- (void)invalidate;
- (id)specifierForPresentationDate:;
- (void)desiredFidelityForDateInterval:timelines:withCompletion:;
- (void)performFrameSpecifiersRequest:timelines:;
@end
