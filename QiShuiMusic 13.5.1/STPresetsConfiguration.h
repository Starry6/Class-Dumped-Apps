@interface STPresetsConfiguration : NSObject
@property (nonatomic) NSNumber allowedAppStoreRating;
@property (nonatomic) BOOL booksAllowed;
@property (nonatomic) NSNumber allowedTVRating;
@property (nonatomic) NSNumber allowedMovieRating;
@property (nonatomic) BOOL explicitMediaAllowed;
@property (nonatomic) BOOL musicVideosAllowed;
@property (nonatomic) BOOL musicProfilesAllowed;
@property (nonatomic) q allowedWebContent;
@property (nonatomic) BOOL siriWebSearchAllowed;
@property (nonatomic) BOOL siriExplicitAllowed;
@property (nonatomic) BOOL deletingAppsAllowed;
- (id)allowedAppStoreRating;
- (BOOL)isBooksAllowed;
- (id)allowedTVRating;
- (id)allowedMovieRating;
- (BOOL)isExplicitMediaAllowed;
- (BOOL)areMusicVideosAllowed;
- (BOOL)areMusicProfilesAllowed;
- (long long)allowedWebContent;
- (BOOL)isSiriWebSearchAllowed;
- (BOOL)isSiriExplicitAllowed;
- (BOOL)isDeletingAppsAllowed;
@end
