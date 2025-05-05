@interface SALocalSearchPhotoList : AceObject
@property (nonatomic) NSArray photos;
@property (nonatomic) NSString providerId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)photos;
- (void)setPhotos:;
- (id)providerId;
- (void)setProviderId:;
+ (id)photoList;
+ (id)photoListWithDictionary:context:;
@end
