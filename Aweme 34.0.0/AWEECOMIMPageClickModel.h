@interface AWEECOMIMPageClickModel : NSObject
@property (nonatomic) Q type;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString btmId;
@property (nonatomic) UIResponder btmHost;
@property (nonatomic) BOOL shouldAddSourceBtmToken;
@property (nonatomic) NSString content;
- (id)btmId;
- (void)setBtmId:;
- (void)setShouldAddSourceBtmToken:;
- (void)setBtmHost:;
- (id)btmHost;
- (BOOL)shouldAddSourceBtmToken;
- (id)schema;
- (id)init;
- (id)content;
- (void)setSchema:;
- (unsigned long long)type;
- (void)setContent:;
- (void)setType:;
- (void).cxx_destruct;
+ (id)openUrlModelWithSchema:btmIDForSourceBtmToken:btmHost:;
+ (id)showToastModelWithContent:;
+ (id)openUrlModelWithSchema:;
@end
