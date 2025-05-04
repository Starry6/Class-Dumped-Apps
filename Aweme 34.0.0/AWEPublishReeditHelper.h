@interface AWEPublishReeditHelper : NSObject
+ (BOOL)shouldMigrateToInfini:;
+ (BOOL)isReedit:;
+ (BOOL)isInfiniImageAlbum:;
+ (BOOL)isInfiniMulti:;
+ (id)awemeToReedit:;
+ (BOOL)isSlides:;
@end
