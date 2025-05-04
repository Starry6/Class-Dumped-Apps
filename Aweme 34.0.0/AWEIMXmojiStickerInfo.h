@interface AWEIMXmojiStickerInfo : NSObject
@property (nonatomic) NSString xmojiID;
@property (nonatomic) NSNumber width;
@property (nonatomic) NSNumber height;
@property (nonatomic) NSString animateURI;
@property (nonatomic) NSArray animateUrlList;
@property (nonatomic) NSString animateType;
@property (nonatomic) NSNumber stickerType;
- (void)setStickerType:;
- (void)setAnimateType:;
- (id)animateType;
- (id)xmojiID;
- (id)initWithXmojiID:width:height:animateURI:animateUrlList:animateType:stickerType:;
- (id)animateURI;
- (id)animateUrlList;
- (void)setXmojiID:;
- (void)setAnimateURI:;
- (void)setAnimateUrlList:;
- (void)setHeight:;
- (void)setWidth:;
- (void)encodeWithCoder:;
- (id)width;
- (void).cxx_destruct;
- (id)height;
- (BOOL)isEqual:;
- (id)initWithCoder:;
- (id)stickerType;
@end
