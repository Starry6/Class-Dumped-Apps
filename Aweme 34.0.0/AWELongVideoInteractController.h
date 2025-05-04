@interface AWELongVideoInteractController : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)canCollectLongVideo:;
+ (id)disableCollectLongVideoString:;
+ (BOOL)canCommentLongVideo:;
+ (BOOL)canDiggLongVideo:;
+ (id)disableDiggLongVideoString:;
+ (BOOL)canShareLongVideo:;
+ (BOOL)canCollectLongVideoAlbum:;
+ (id)disableCollectLongVideoAlbumToast:;
+ (id)disableShareLongVideoString:;
+ (id)disableCommentLongVideoString:;
@end
