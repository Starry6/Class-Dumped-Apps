@interface DefaultCollectionActions : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)autoBugCaptureWithType:subType:domain:;
- (void)tapToRadar:description:radar:componentName:componentVersion:componentID:;
@end
