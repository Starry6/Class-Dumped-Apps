@interface AWEStickerSectionModel : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) BOOL supportPagingLoad;
@property (nonatomic) NSArray stickers;
- (id)initWithName:stickers:;
- (BOOL)isSupportPagingLoad;
- (void)setSupportPagingLoad:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (id)stickers;
- (void)setStickers:;
@end
