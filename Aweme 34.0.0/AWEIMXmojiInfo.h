@interface AWEIMXmojiInfo : NSObject
@property (nonatomic) NSNumber version;
@property (nonatomic) AWEIMXmojiIconInfo iconInfo;
@property (nonatomic) NSArray stickerInfos;
@property (nonatomic) NSArray placeHolderStickerInfos;
- (id)iconInfo;
- (void)setIconInfo:;
- (id)stickerInfos;
- (void)setStickerInfos:;
- (void)setPlaceHolderStickerInfos:;
- (id)placeHolderStickerInfos;
- (void)encodeWithCoder:;
- (id)version;
- (void)setVersion:;
- (void).cxx_destruct;
- (id)initWithCoder:;
@end
