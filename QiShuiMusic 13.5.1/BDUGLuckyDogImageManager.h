@interface BDUGLuckyDogImageManager : NSObject
- (void)_requestImage:complete:;
- (id)_spreadURL:;
- (void)requestImage:complete:;
- (void)setImageView:withImageURL:placeholder:;
- (void)settingsUpdate;
- (id)init;
- (void)dealloc;
+ (id)sharedInstance;
@end
