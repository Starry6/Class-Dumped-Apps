@interface CNUILikenessSystemImageBadge : NSObject
@property (nonatomic) NSData imageData;
@property (nonatomic) UIImage image;
@property (nonatomic) Q badgeType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)imageData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)image;
- (id)copyWithZone:;
- (unsigned long long)badgeType;
- (id)initWithSystemImageNamed:;
- (void)setBadgeType:;
@end
