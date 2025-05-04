@interface AWEFormatIMEnterRoomTransactor : NSObject
@property (nonatomic) AWEFormatIdToBotIdApi transApi;
- (id)enterV2FormatRoomWithFormatAisle:;
- (void)processError:;
- (id)transApi;
- (void)processRealFormatEnterRoomWithFormatAisle:;
- (id)getBizParams:;
- (void)setTransApi:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
