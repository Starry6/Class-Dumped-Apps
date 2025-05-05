@interface CNUIPRLikenessBadgeImageProvider : NSObject
@property (nonatomic) CNCache cache;
@property (nonatomic) NSData badgeImageData;
@property (nonatomic) UIImage badgeImage;
@property (nonatomic) Q badgeType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)_cnui_likenessType;
- (void).cxx_destruct;
- (id)cache;
- (unsigned long long)badgeType;
- (void)setBadgeImage:;
- (id)badgeImage;
- (void)setBadgeType:;
- (id)_cnui_imageForSize:scale:;
- (id)initWithBadge:;
- (id)badgeCGImage;
- (id)renderRoundedRectImageForSize:scale:;
- (id)renderCircularImageForSize:scale:;
- (id)badgeImageData;
- (void)setBadgeImageData:;
@end
