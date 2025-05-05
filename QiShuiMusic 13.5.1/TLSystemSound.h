@interface TLSystemSound : NSObject
@property (nonatomic) NSURL soundFileURL;
@property (nonatomic) I soundID;
@property (nonatomic) BOOL requiresLongFormPlayback;
@property (nonatomic) BOOL valid;
- (void)dealloc;
- (id)_description;
- (BOOL)requiresLongFormPlayback;
- (id)soundFileURL;
- (BOOL)isValid;
- (void).cxx_destruct;
- (unsigned int)soundID;
- (id)description;
- (id)initWithSoundFileURL:soundID:requiresLongFormPlayback:;
- (void)_prepareForDealloc;
- (void)beginRequiringUnderlyingSoundLoaded;
- (void)endRequiringUnderlyingSoundLoaded;
- (void)_ensureUnderlyingSoundCreated;
@end
