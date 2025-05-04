@interface AWEEcomEventObject : NSObject
@property (nonatomic) NSMutableDictionary params;
@property (nonatomic) NSString event;
@property (nonatomic) @? enterFrom;
@property (nonatomic) @? enterFromSecond;
@property (nonatomic) @? mergeDict;
@property (nonatomic) @? addKeyPair;
@property (nonatomic) @? send;
- (void)setEnterFrom:;
- (id)enterFrom;
- (id)enterFromSecond;
- (void)setEnterFromSecond:;
- (id)mergeDict;
- (void)setMergeDict:;
- (id)addKeyPair;
- (void)setAddKeyPair:;
- (void)setEvent:;
- (id)initWithEvent:;
- (void).cxx_destruct;
- (id)event;
- (id)params;
- (id)send;
- (void)setParams:;
- (void)setSend:;
@end
