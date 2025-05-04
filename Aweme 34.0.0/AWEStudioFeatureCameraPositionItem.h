@interface AWEStudioFeatureCameraPositionItem : AWEStudioFeatureStatusBaseItem
@property (nonatomic) q defaultPosition;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDefaultPosition:;
- (id)initWithStorage:persistenceKey:defaultCameraPosition:;
- (void)saveCameraPosition:;
- (long long)cameraPosition;
- (long long)defaultPosition;
@end
