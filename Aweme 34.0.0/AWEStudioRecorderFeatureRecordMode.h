@interface AWEStudioRecorderFeatureRecordMode : NSObject
@property (nonatomic) NSNumber modeID;
@property (nonatomic) NSString name;
@property (nonatomic) NSArray submodeArray;
@property (nonatomic) NSNumber landingSubmodeID;
- (id)initWithModeID:name:;
- (id)modeID;
- (id)submodeArray;
- (void)setSubmodeArray:;
- (id)landingSubmodeID;
- (void)setLandingSubmodeID:;
- (void).cxx_destruct;
- (id)name;
@end
