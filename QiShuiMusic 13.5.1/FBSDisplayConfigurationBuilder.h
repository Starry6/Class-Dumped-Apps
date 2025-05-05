@interface FBSDisplayConfigurationBuilder : NSObject
- (void)setUniqueIdentifier:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithConfiguration:;
- (id)_lock_sanitizedModeForMode:;
- (id)buildConfigurationWithError:;
- (void)setCurrentMode:preferredMode:otherModes:;
- (void)setPixelSize:nativeBounds:bounds:;
- (void)setExpectsSecureRendering;
- (void)setUIKitMainLike;
- (void)setCloningNotSupported;
- (void)setOverscanned:compensation:safeRatio:;
@end
