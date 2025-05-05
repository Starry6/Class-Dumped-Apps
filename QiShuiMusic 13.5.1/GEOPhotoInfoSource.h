@interface GEOPhotoInfoSource : NSObject
@property (nonatomic) <GEOPhotoInfoProvider> principalPhotoInfoProvider;
@property (nonatomic) NSArray allPhotoInfoProviders;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)largestPhoto;
- (id)bestPhotoForSize:options:;
- (double)sizeRatio;
- (id)initWithPhotoContent:;
- (id)principalPhotoInfoProvider;
- (id)allPhotoInfoProviders;
@end
