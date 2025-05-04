@interface AWEBootConfigQueue : NSObject
@property (nonatomic) NSMutableArray data;
@property (nonatomic) NSString name;
@property (nonatomic) BOOL validExist;
@property (nonatomic) I qos;
@property (nonatomic) @? addTask;
- (id)addTask;
- (BOOL)validExist;
- (id)initWithValidExist:qos:;
- (void)setValidExist:;
- (void)addTask:;
- (void)setData:;
- (void)setQos:;
- (void).cxx_destruct;
- (id)data;
- (unsigned int)qos;
- (void)setName:;
- (id)name;
- (id)tasks;
@end
