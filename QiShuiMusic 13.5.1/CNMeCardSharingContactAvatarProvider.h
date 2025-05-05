@interface CNMeCardSharingContactAvatarProvider : NSObject
@property (nonatomic) CNAvatarImageRenderer renderer;
@property (nonatomic) CNContact contact;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSData imageData;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} cropRect;
@property (nonatomic) NSData thumbnailImageData;
- (id)renderer;
- (id)imageData;
- (id)initWithContact:;
- (id)contact;
- (id)cropRect;
- (void).cxx_destruct;
- (id)thumbnailImageData;
- (void)generateAvatarImageOfSize:imageHandler:;
- (id)initWithContact:renderer:;
@end
