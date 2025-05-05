@interface CSJSDImageAssetManager : NSObject
@property (nonatomic) NSMapTable imageTable;
- (id)getPathForName:bundle:preferredScale:;
- (id)imageForName:;
- (id)imageTable;
- (void)setImageTable:;
- (void)storeImage:forName:;
- (id)init;
- (void)dealloc;
- (void)didReceiveMemoryWarning:;
- (void).cxx_destruct;
+ (id)sharedAssetManager;
@end
