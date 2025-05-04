@interface AWEBtmModelAndTokenWrapper : NSObject
@property (nonatomic) AWEBtmModel btmModel;
@property (nonatomic) NSString sourceBtmToken;
- (void)setSourceBtmToken:;
- (id)sourceBtmToken;
- (id)btmModel;
- (void)setBtmModel:;
- (void).cxx_destruct;
+ (id)initWithBtmModel:;
+ (id)initWithSourceBtmToken:;
@end
