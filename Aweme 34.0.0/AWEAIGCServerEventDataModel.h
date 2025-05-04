@interface AWEAIGCServerEventDataModel : NSObject
@property (nonatomic) NSMutableData data;
@property (nonatomic) NSString lastKey;
@property (nonatomic) NSMutableDictionary prepareSendEvent;
- (void)setLastKey:;
- (id)prepareSendEvent;
- (void)setPrepareSendEvent:;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
- (id)lastKey;
@end
