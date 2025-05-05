@interface SSSoftwareLibraryItem : NSObject
@property (nonatomic) BOOL beta;
@property (nonatomic) BOOL launchProhibited;
@property (nonatomic) BOOL placeholder;
@property (nonatomic) BOOL profileValidated;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (BOOL)isBeta;
- (void)dealloc;
- (BOOL)isPlaceholder;
- (id)copyXPCEncoding;
- (BOOL)isLaunchProhibited;
- (void)setPlaceholder:;
- (id)valueForProperty:;
- (void)_setValue:forProperty:;
- (BOOL)isProfileValidated;
- (void)setBeta:;
- (void)setLaunchProhibited:;
- (void)setProfileValidated:;
- (id)ETagForAssetType:;
- (BOOL)setETag:forAssetType:error:;
- (id)_initWithITunesMetadata:;
@end
