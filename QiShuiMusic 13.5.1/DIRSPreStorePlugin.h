@interface DIRSPreStorePlugin : DIRSBasicModule
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) q state;
@property (nonatomic) DIRSContext context;
@property (nonatomic) NSString category;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <IRISEventSerializer> serializer;
- (void)_initDataTable;
- (void)queryEvents:usingBlock:;
- (BOOL)startWithPath:;
- (void)commonInit;
- (void)stop;
- (void)run;
- (void).cxx_destruct;
- (void)removeEvents:;
- (void)addEvent:;
+ (id)moduleId;
+ (BOOL)isPlugin;
+ (id)moduleVersion;
@end
