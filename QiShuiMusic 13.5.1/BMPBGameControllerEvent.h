@interface BMPBGameControllerEvent : PBCodable
@property (nonatomic) BOOL hasIsControllerConnected;
@property (nonatomic) BOOL isControllerConnected;
@property (nonatomic) BOOL hasNumberOfControllersConnected;
@property (nonatomic) NSInteger numberOfControllersConnected;
- (void)setIsControllerConnected:;
- (void)writeTo:;
- (BOOL)isControllerConnected;
- (unsigned long long)hash;
- (void)setHasNumberOfControllersConnected:;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)hasNumberOfControllersConnected;
- (BOOL)readFrom:;
- (BOOL)hasIsControllerConnected;
- (id)description;
- (int)numberOfControllersConnected;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setNumberOfControllersConnected:;
- (void)setHasIsControllerConnected:;
- (id)copyWithZone:;
@end
