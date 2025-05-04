@interface AWEECOpenGoodDetailPayload : NSObject
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) NSString schemaString;
@property (nonatomic) NSString clickAreaString;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSDictionary customEntranceInfo;
@property (nonatomic) q type;
@property (nonatomic) <AFDRichContentContainerViewControllerProtocol> richContentContainer;
- (void)setEnterFrom:;
- (id)enterFrom;
- (id)richContentContainer;
- (void)setRichContentContainer:;
- (id)schemaString;
- (void)setSchemaString:;
- (void)setClickAreaString:;
- (id)clickAreaString;
- (id)customEntranceInfo;
- (void)setCustomEntranceInfo:;
- (void)setModel:;
- (long long)type;
- (id)model;
- (void)setType:;
- (void).cxx_destruct;
@end
