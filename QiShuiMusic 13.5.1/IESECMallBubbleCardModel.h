@interface IESECMallBubbleCardModel : NSObject
@property (nonatomic) NSString lynxSchema;
@property (nonatomic) NSDictionary lynxData;
@property (nonatomic) BOOL grayEnable;
- (BOOL)grayEnable;
- (id)lynxData;
- (id)lynxSchema;
- (void)setGrayEnable:;
- (void)setLynxData:;
- (void)setLynxSchema:;
- (void).cxx_destruct;
@end
