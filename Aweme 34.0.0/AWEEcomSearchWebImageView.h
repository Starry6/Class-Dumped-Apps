@interface AWEEcomSearchWebImageView : UIImageView
- (void)search_setImageWithURLArray:placeholder:bizTag:sceneTag:completion:;
- (void)search_setImageWithURLArray:placeholder:bizTag:sceneTag:preferredSize:options:completion:;
- (void)search_setImageWithURL:placeholder:bizTag:sceneTag:;
- (void)search_setImageWithURLArray:placeholder:options:bizTag:sceneTag:completion:;
+ (id)safeURL:;
@end
