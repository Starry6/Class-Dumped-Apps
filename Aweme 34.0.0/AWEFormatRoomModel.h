@interface AWEFormatRoomModel : NSObject
@property (nonatomic) NSNumber formatId;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) NSNumber imBotId;
@property (nonatomic) NSDictionary pageConfigParams;
@property (nonatomic) NSDictionary contextParams;
- (void)setEnterFrom:;
- (void)setEnterMethod:;
- (id)enterMethod;
- (id)enterFrom;
- (id)imBotId;
- (id)contextParams;
- (void)setContextParams:;
- (void)setImBotId:;
- (id)pageConfigParams;
- (void)setPageConfigParams:;
- (void).cxx_destruct;
- (id)formatId;
- (void)setFormatId:;
@end
