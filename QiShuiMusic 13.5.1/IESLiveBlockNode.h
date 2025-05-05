@interface IESLiveBlockNode : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString queuelabel;
@property (nonatomic) double cost;
@property (nonatomic) double startTime;
- (id)queuelabel;
- (void)setQueuelabel:;
- (void)setName:;
- (void)setStartTime:;
- (double)cost;
- (double)startTime;
- (void).cxx_destruct;
- (id)name;
- (void)setCost:;
@end
