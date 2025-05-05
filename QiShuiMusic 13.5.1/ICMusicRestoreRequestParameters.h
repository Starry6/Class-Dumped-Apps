@interface ICMusicRestoreRequestParameters : NSObject
@property (nonatomic) NSNumber adamID;
@property (nonatomic) NSNumber accountID;
@property (nonatomic) NSNumber matchStatus;
@property (nonatomic) NSString title;
@property (nonatomic) NSString storeFrontID;
@property (nonatomic) NSString mediaKind;
@property (nonatomic) NSString flavor;
- (id)matchStatus;
- (id)accountID;
- (id)mediaKind;
- (id)title;
- (void).cxx_destruct;
- (id)adamID;
- (id)flavor;
- (id)storeFrontID;
- (id)initWithItemID:title:storeFrontID:mediaKind:accountID:matchStatus:flavor:;
@end
