@interface IESLiveNewDressProfileSkinCache : NSCache
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)storeResource:forDressID:error:;
- (id)profileSkinResourceForDressID:;
- (id)profileSkinWebPSizeFromConfig:resourceName:;
- (id)resourceForDressID:;
- (id)init;
+ (int)dressType;
@end
