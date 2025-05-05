@interface UGEEventCenter : NSObject
@property (nonatomic) NSMutableDictionary eventChainInfo;
- (void)buildEventChainWithInfo:;
- (id)eventChainInfo;
- (id)getEventChainWithName:;
- (void)setEventChainInfo:;
- (id)init;
- (void).cxx_destruct;
+ (id)defaultCenter;
@end
