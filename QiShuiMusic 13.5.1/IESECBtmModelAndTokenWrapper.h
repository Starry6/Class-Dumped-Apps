@interface IESECBtmModelAndTokenWrapper : NSObject
@property (nonatomic) IESECBTMModel btmModel;
@property (nonatomic) NSString sourceBtmToken;
- (id)btmModel;
- (void)setBtmModel:;
- (void)setSourceBtmToken:;
- (id)sourceBtmToken;
- (void).cxx_destruct;
+ (id)initWithBtmModel:;
+ (id)initWithSourceBtmToken:;
@end
