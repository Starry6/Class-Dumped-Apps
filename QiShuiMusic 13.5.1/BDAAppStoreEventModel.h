@interface BDAAppStoreEventModel : NSObject
@property (nonatomic) NSString tag;
@property (nonatomic) NSString value;
@property (nonatomic) NSString logExtra;
@property (nonatomic) NSString downloadURL;
@property (nonatomic) NSString adExtraData;
- (void)setAdExtraData:;
- (id)adExtraData;
- (id)initWithTag:value:logExtra:downloadURL:adExtraData:;
- (id)logExtra;
- (void)setLogExtra:;
- (id)transToDictionary;
- (id)tag;
- (id)initWithDictionary:;
- (void)setTag:;
- (void)setValue:;
- (id)downloadURL;
- (void).cxx_destruct;
- (id)value;
- (void)setDownloadURL:;
@end
