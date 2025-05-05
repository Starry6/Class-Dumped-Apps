@interface UIDraggingSystemSceneMetadata : NSObject
@property (nonatomic) NSString activityType;
@property (nonatomic) NSString sceneIdentifier;
- (id)activityType;
- (void)setActivityType:;
- (id)sceneIdentifier;
- (id)initWithCoder:;
- (void)setSceneIdentifier:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
+ (BOOL)supportsSecureCoding;
@end
