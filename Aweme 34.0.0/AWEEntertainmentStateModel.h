@interface AWEEntertainmentStateModel : MTLModel
@property (nonatomic) NSNumber currentState;
@property (nonatomic) NSMutableDictionary textDic;
@property (nonatomic) double timeStamp;
- (id)textDic;
- (void)setTextDic:;
- (void)setCurrentState:;
- (id)currentState;
- (void).cxx_destruct;
- (double)timeStamp;
- (void)setTimeStamp:;
@end
