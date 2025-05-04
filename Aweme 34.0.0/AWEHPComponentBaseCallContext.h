@interface AWEHPComponentBaseCallContext : NSObject
@property (nonatomic) NSArray dynamicStrategies;
@property (nonatomic) NSString componentID;
@property (nonatomic) NSString componentType;
@property (nonatomic) NSMutableArray tabIDStack;
@property (nonatomic) NSSet cTags;
@property (nonatomic) NSDictionary bizTrackParams;
- (id)cTags;
- (id)dynamicStrategies;
- (void)setCTags:;
- (id)tabIDStack;
- (id)bizTrackParams;
- (void)setBizTrackParams:;
- (void)setTabIDStack:;
- (void)setDynamicStrategies:;
- (id)componentType;
- (id)description;
- (void)setComponentType:;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)setComponentID:;
- (id)componentID;
@end
