@interface SNSessionProminenceListener : NSObject
@property (nonatomic) ACActivityProminenceListener listener;
- (id)init;
- (id)listener;
- (void).cxx_destruct;
- (void)setListener:;
- (id)listenForSessionProminence:withHandler:;
@end
