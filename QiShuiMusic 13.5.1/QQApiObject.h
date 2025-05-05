@interface QQApiObject : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString description;
@property (nonatomic) NSString universalLink;
@property (nonatomic) Q cflag;
@property (nonatomic) NSString tagName;
@property (nonatomic) NSString messageExt;
@property (nonatomic) Q shareDestType;
- (unsigned long long)cflag;
- (id)messageExt;
- (void)setCflag:;
- (void)setMessageExt:;
- (void)setShareDestType:;
- (unsigned long long)shareDestType;
- (id)init;
- (void)setTitle:;
- (id)title;
- (void)setUniversalLink:;
- (id)description;
- (void)setDescription:;
- (id)tagName;
- (id)universalLink;
- (void)setTagName:;
@end
