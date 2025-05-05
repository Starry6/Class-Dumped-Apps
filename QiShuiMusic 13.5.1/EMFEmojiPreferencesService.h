@interface EMFEmojiPreferencesService : NSObject
@property (nonatomic) EMFEmojiPreferences preferences;
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setPreferences:;
- (void)dealloc;
- (id)preferences;
- (id)dispatchQueue;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void).cxx_destruct;
- (id)initWithMachName:;
- (void)_createPreferencesIfNecessary;
+ (id)sharedServiceWithMachName:;
@end
