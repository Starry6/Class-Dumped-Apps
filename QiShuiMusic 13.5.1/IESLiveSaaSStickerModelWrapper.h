@interface IESLiveSaaSStickerModelWrapper : NSObject
@property (nonatomic) NSArray stickers;
@property (nonatomic) NSString reservDecoListVersion;
- (void)parseDecorationMessage:;
- (id)reservDecoListVersion;
- (void)setReservDecoListVersion:;
- (id)initWithMessage:;
- (void).cxx_destruct;
- (id)stickers;
- (void)setStickers:;
@end
