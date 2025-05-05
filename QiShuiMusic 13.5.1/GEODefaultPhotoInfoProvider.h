@interface GEODefaultPhotoInfoProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)largestPhoto;
- (id)bestPhotoForSize:options:;
- (double)sizeRatio;
- (int)designatedURLType;
- (id)initWithPhotoContent:;
+ (id)sortedPhotoInfoFromPhotoVersions:;
@end
