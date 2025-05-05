@interface SNSessionQoSListener : NSObject
@property (nonatomic) ACActivityQoSListener listener;
- (id)init;
- (id)listener;
- (void).cxx_destruct;
- (void)setListener:;
- (id)listenForSessionQoS:withHandler:;
@end
