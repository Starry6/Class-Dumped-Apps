@interface AWEStudioFeatureLivePhotoOpenItem : AWEStudioFeatureStatusBaseItem
@property (nonatomic) BOOL defaultOn;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)defaultOn;
- (id)initWithStorage:persistenceKey:defaultOn:;
- (void)saveLivePhotoOn:;
- (BOOL)livePhotoOn;
- (void)setDefaultOn:;
@end
